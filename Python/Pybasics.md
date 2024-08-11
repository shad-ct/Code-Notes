# Lists 
    value = ["shad","shop"]
    print(value[0:]) # to print from 0 to infinity 
    value.append("hey") #to add a value 
    values = values + ["new1","new2"] #adding new values 
# if else
    a = 10
    if a >10 :
    print("a is > 10")
    elif a ==0:
        print("a is 0")
    else : 
        print(" a is not > 10 : ( ")
# range 
    for x in range(10): #range(10,20)
    print(x)

# function 
    def hey():
        print("this is a function ")
    hey()
# tuple 
mytuple = ("apple", "banana", "cherry") # just like lists but ()

#dicinory 
values = {"name":"shad", "place":"tkbd"}

print(values.get("name"))

# modules : 
main file : 
    import test 
    test.hey(10)

file 2 : 
    def hey(num):
        if num<0:
            print("num is greater than 0 lol ")
        elif num>0:
            print("num is less than 0 lol ")
        else :
            print("bruh its 0!!")

# to check the module name : 
print(__name__)
nb : you can also assign like this : 
    check = test.hey
    check(10)

# when you wanna import only one module from the file ; 
    from test import hey
# rename module : 
    import test as testing 
    testing.hey(10)

# exception/error handling 
    b = 0
    try : 
        a = 10/b
        print(a)
        print("completed\n")
    except ZeroDivisionError: 
        print("Error: Division by zero is not allowed")

    print("progress completed the ")

# global and non : 
    def check_scope():
        def do_local():
            test = "local test"
        def do_non_local():
            nonlocal test
            test = "nonlocal test"
        def do_global():
            global test
            test = "global test"
        test = "default"

        do_local()
        print("test value after do local : "+test)

        do_non_local()
        print("test value after non do local : "+test)

        do_global()
        print("test value after do global : "+test)

    check_scope()
    print("test value after main : "+test)

    result : 
    test value after do local : default
    test value after non do local : nonlocal test
    test value after do global : nonlocal test   
    test value after main : global test

# class : 
    class FirstClasas:
        def hell(self):
            print("hello from class")
    x = FirstClasas()
    x.hell()  # Output: hello from class

# inheritance
    class base : 
        def display(self):
            print("hello")

    class sub(base): #inheritance 
        def welcome(self):
            print("welcome to python")

    sub().display()

# constuctor : 
    class base : 
        def __init__(self,id,name):
            self.id = id
            self.name = name 
        def display(self):
            print(f"ID : {self.id} , Name : {self.name}")

    emp1 = base(name = "shad",id = 1)
    emp2 = base("jaseel",2)

    emp1.display()
    emp2.display()

# date and time 
    import datetime
    # print(datetime.datetime.now()) # print date and time now 
    # print(datetime.date.today()) # just the current date
    now = datetime.datetime.now()
    print(now.strftime("%d | %m | %Y")) # u can use y for just last 2 nums, like 24 


 # file handeling 
    file = open("file.py","w")
    #Input 
    file.write("print('hi')")
    file.close()

    # opening : 
    with open("file.py","r") as f:
        x = f.read()
    print(x)

# Tkinder : 
from tkinter import*;
window = Tk()
window.geometry("500x500")
button = Button(text='Ok')
label = Label(window,text = "Welcome")

label.pack()
button.pack()
window.mainloop()
