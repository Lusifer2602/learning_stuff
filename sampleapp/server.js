const express = require('express');
const app = express();
const http = require('http').createServer(app);
const io = require('socket.io')(http);
const port = process.env.PORT || 3000;

app.use(express.static('public'));

io.on('connection', (socket) => {
  console.log('A user connected');
  // Handle events for pairing, messaging, etc.
  socket.on('disconnect', () => {
    console.log('User disconnected');
  });
});

// http.listen(port, () => {
//   console.log(`Server listening on port ${port}`);
// });
const HOST = '0.0.0.0'; // Allow all network interfaces
const PORT = 3000;

http.listen(PORT, HOST, () => {
  console.log(`Server running at http://${HOST}:${PORT}`);
});