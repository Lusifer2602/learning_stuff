import math
choice1=('''1. Basic Arithmetic :
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
    f. surface area of a sphere ''')

def two_num():
    a=float(input('Enter the first num : '))
    b=float(input('Enter the second num : '))

def single_num():
    a=float(input('Enter the number : '))

def power_raise():
    power=float(input('What power do you want to raise it to? - '))
    print(math.pow(a, power))

def remainder():
    divide_by=float(input('What number do you want to divide it by to get remainder : '))
    print('Remainder will be : ', a%divide_by)

def sroot():
           print('Square root will be  : ', math.sqrt(a))

def root():
           num=float(input('Which root do you want : '))
           print("It is : ", pow(a, 1/num))

def logcalc():
           base=int(input('To what base do you want the log value to be : '))
           print(f'log of {a} to the base {base} will be', math.log(a, base))

def leastcm(): #giving weird names to avoid clash with actual keywords or pre defined functions from default/math libray
    num1, num2=float(input('Enter the first & second number separated by a space : '))
    print('LCM will be : ', math.lcm(num1, num2))

def highestcm():
    num1, num2=float(input('Enter the first & second number separated by a space : '))
    print('HCF/GCD will be : ', math.gcd(num1, num2))

def factorial():
    num1=int(input('Enter the number for factorial (make sure it is non decimal) : '))
    print(f'Factorial of {num1} will be : ', math.factorial(num1))
#Basic arithmetic calculations done here
def angleconvert():
    which=int(input('''Enter 1 if you want to convert radian to degrees
                    and 2 for degrees to radian : '''))
    angle=float(input("Enter the value of the angle : "))
    match which:
        case 1:
            print('In Degrees it will be : ', math.degrees(angle))
        case 2:
            print('In Radians it will be : ', math.radians(angle))
        case _:
            print('Something went wrong try again')

def angle():
    angle=float(input("Enter value of the angle"))

def cosine(): 
    print(f'cos of {angle} will be : ', math.cos(angle))
def sine():
    print(f'cos of {angle} will be : ', math.sin(angle))
def tangent():
    print(f'tan of {angle} will be : ', math.sin(angle))

def cosinv():
    print(f'cos inverse of {angle} will be : ', math.acos(angle))
def sininv():
    print(f'sin inverse of {angle} will be : ', math.asin(angle))
def taninv():
    print(f'tan inverse of {angle} will be : ', math.atan(angle))
#Trigonometric Functions done here

#Geometric Calculations
def areasquare():
          s=float(input("Enter side of the square : "))
          print("Area =", s*s+'sq. units')

def arectangle():
    length, breadth=float(input("Enter length and breadth of the rectangle separated by spaces"))
    print("area =", length*breadth)
def atriangle():
    s1, s2, s3=float(input("all three sides of the triangle separated by spaces : "))
    semip=(s1+s2+s3)/2
    area=math.sqrt(s*(s-a1)*(s-s2)*(s-s3))
    print("Area of the triangle will be : ", area)

print(f'Enter number of which calculation you\'d want to perform \n Here are the choices :\n {choice1}\n{choice2}\n{choice3}')

choice=int(input("Enter your choice : "))
subchoice=input("Now enter alphabet for which operation you want to perform here")
