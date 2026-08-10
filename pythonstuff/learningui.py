import tkinter as tk

root=tk.Tk()

root.title("I am batman")
root.configure(background="red")
root.minsize(200, 200)
root.maxsize(800, 800)


tk.Label(root, text="DREAM ON ASSHOLES\n").pack()
# tk.Label(root, text="").pack()
tk.Label(root, text="Silicon Valley").pack() #here we created two label
label1=tk.Label(root, text="I am Vengeance \n ~Bruce Wayne")
label1.pack()

tk.label(root, image=image)
root.mainloop()