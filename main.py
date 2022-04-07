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
root.geometry("1000x700")
root.minsize(width=400, height=400)

m = PanedWindow(root, orient=VERTICAL)
m.pack(fill=BOTH, expand=1)


# TOP : Text Editor
text = Example(root)

text.pack(fill=Y, expand=1)
m.add(text)
# text.focus_set()

# BOTTOM : Compile Log
compiled = ScrolledText(state='normal', height=10,
                        width=100, wrap='none', undo=True)
compiled.pack(fill=Y, expand=1)
compiled.configure(bg="black", fg="white")
m.add(compiled)


objFile = File(text, root)
executer = Executer(text, compiled, objFile)
img = PhotoImage(file='right.png')
button = Button(root, image=img, command=executer.compileFile)
button.pack(side=TOP)
m.add(button)


menubar = Menu(root)
file_menu(root, text, menubar)

root.mainloop()
