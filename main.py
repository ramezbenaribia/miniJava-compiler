import tkinter as tk
from tkinter import *
from tkinter.filedialog import *
from tkinter.messagebox import *
from tkinter.scrolledtext import *

from Interface.Text_line_numbered import Example
from Interface.Menu import main as file_menu
from Interface.Menu import Executer, File

root = tk.Tk()
root.title("Java Compiler")
root.geometry("1200x600")

m = PanedWindow(root, orient=VERTICAL)


# LEFT : Text Editor
text = Example(root)

text.pack(fill=Y, expand=1, pady=20,  side=tk.LEFT)

# RIGHT : Compile Log
compiled = ScrolledText(state='normal', height=32, width=100)
compiled.pack(fill=Y, expand=1, pady=50, side=tk.RIGHT)
compiled.configure(bg="black", fg="white")


objFile = File(text, root)
executer = Executer(text, compiled, objFile)
img = PhotoImage(file='start.png')
button = Button(root, image=img, width=100, command=executer.compileFile)

button.place(x=900, y=10)

menubar = Menu(root)
file_menu(root, text, menubar)

root.mainloop()
