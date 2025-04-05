const express = require('express');
const app = express();
const http = require('http').createServer(app);
const io = require('socket.io')(http);

app.use(express.static('public'));

const users = {}; // Store connected users by socket ID

io.on('connection', (socket) => {
  console.log(`User connected: ${socket.id}`);

  // Notify others about the new user
  socket.broadcast.emit('user-connected', socket.id);

  // Handle new user registration
  socket.on('new-user', (user) => {
    users[socket.id] = user;
    io.emit('update-users', Object.values(users)); // Send updated user list to all clients
  });

  // Example: Handle chat message
  socket.on('chat-message', (msg) => {
    socket.broadcast.emit('chat-message', {
      id: socket.id,
      message: msg
    });
  });

  // Handle disconnect
  socket.on('disconnect', () => {
    console.log(`User disconnected: ${socket.id}`);
    delete users[socket.id];
    socket.broadcast.emit('user-disconnected', socket.id);
    io.emit('update-users', Object.values(users)); // Update user list
  });
});

const HOST = '0.0.0.0'; // Allow all network interfaces
const PORT = 3000;

http.listen(PORT, HOST, () => {
  console.log(`Server running at http://${HOST}:${PORT}`);
});