import math
choice=int(input("Enter number of which calculation you'd want to perform"))
choice1=('''1. Basic Arithmetic & Algebraic Computations:
    a. raise number to a power
    b. remainder
    c. square root
    d. any root of your choice 
    e. factorial
    f. lcm (least common multiple)
    g. log''')
choice2=('''2. Trigonometric Calculations:
    a. angle conversion (radians <-> degrees)
    b. cos
    c. inverse trigonometric functions
    d. sin 
    e. tan''')
choice3=('''3. Geometric Calculations:
    a. area of a circle
    b. area of a square
    c. area of a triangle
    d. perimeter and volume formulas
    e. surface area of a cylinder
    f. surface area of a sphere : ''')

def two_nums():
    a=float(input('Enter the first num : '))
    b=float(input('Enter the second num : '))

def single_num():
    a=float(input('Enter the number : '))

def power_raise():
    power=float(input('What power do you want to raise it to? - '))
    print(math.pow(a, power))

def remainder():
    divide_by=float(input("What number do you want to divide it by to get remainder : "))
    print("Remainder will be : ", a%divide_by)

def sroot():
           print("Square root will be  : ", math.sqrt(a))
def root():
           num=float(input("Which root do you want : "))
           print("It is : ", pow(a, 1/num))
def logcalc():
           base=int(input("To what base do you want the log value to be : "))
           print(f'log of {a} to the base {base} will be', math.log(a, base))

