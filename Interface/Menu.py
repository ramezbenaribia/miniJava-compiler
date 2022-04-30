from cProfile import label
import subprocess
from tkinter import *
from tkinter.filedialog import *
from tkinter.messagebox import *
# from PyQt5.QtGui import QIcon

filename = ''


class File():

    def __init__(self, text, root):
        self.filename = None
        self.text = text
        self.root = root

    def saveFile(self):
        try:
            t = self.text.text.get(0.0, END)
            f = open(self.filename, 'w')
            f.write(t)
            f.close()
        except:
            self.saveAs()

    def saveAs(self):
        f = asksaveasfile(mode='w', defaultextension='.java')
        t = self.text.text.get(0.0, END)
        global filename
        filename = f.name
        self.root.title(filename)
        try:
            f.write(t.rstrip())
        except:
            showerror(title="Oops!", message="Unable to save this file...")

    def openFile(self):
        f = askopenfile(mode='r')
        self.filename = f.name
        global filename
        filename = f.name
        self.root.title(filename)
        t = f.read()
        self.text.text.delete(0.0, END)
        self.text.text.insert(0.0, t)

    def quit(self):
        entry = askyesno(
            title="Quit", message="Are you sure you want to quit?")
        if entry == True:
            self.root.destroy()


class Executer():

    def __init__(self, text, compiled, objFile):
        self.compiled = compiled
        self.text = text
        self.objFile = objFile

    def save(self):
        if (filename == 'Untitled' or filename == ''):
            self.objFile.saveAs()
        else:
            self.objFile.saveFile()

    def compileFile(self):
        # self.save()
        cmd = 'cd compiler'
        t = self.text.text.get(0.0, END)
        f = open("./compiler/file.java", "w")
        try:
            f.write(t.rstrip())
        except:
            print('oops')

        f.close()

        batcmd = 'JavaCompiler1.exe < ' + 'file.java'
        output = subprocess.getoutput(cmd + " && " + batcmd)
        self.compiled.delete("1.0", END)
        if output == '':
            output = "File compiled successfully"
        self.compiled.insert(1.0, chars=output)


def main(root, text, menubar):
    objFile = File(text, root)

    menubar.add_cascade(label="Open", command=objFile.openFile)
    menubar.add_command(label="Save", command=objFile.saveFile)
    menubar.add_command(label="Save As...", command=objFile.saveAs)
    menubar.add_command(label="Quit", command=objFile.quit)

    root.config(menu=menubar)


if __name__ == "__main__":
    print("Please run 'main.py'")
