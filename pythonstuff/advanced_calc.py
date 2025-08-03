import math

choice1 = ('''1. Basic Arithmetic :
    a. raise number to a power
    b. remainder
    c. square root
    d. any root of your choice 
    e. factorial
    f. lcm (least common multiple)
    g. log''')
choice2 = ('''2. Trigonometric Calculations:
    a. angle conversion (radians <-> degrees)
    b. cos
    c. tan
    d. sin 
    e. sin inverse
    f. cos inverse
    g. tan inverse''')
choice3 = ('''3. Geometric Calculations:
    a. area of a circle
    b. area of a square
    c. area of a triangle
    d. perimeter and volume formulas
    e. surface area of a cylinder
    f. surface area of a sphere ''')

def two_num():
    num1, num2 = map(float, input('Enter the first and second number separated by space: ').split())
    return num1, num2

def single_num():
    a = float(input('Enter the number : '))
    return a

def power_raise(a):
    power = float(input('What power do you want to raise it to? - '))
    print("Answer is :", math.pow(a, power))

def remainder(a):
    divide_by = float(input('What number do you want to divide it by to get remainder : '))
    print('Remainder will be :', a % divide_by)

def sroot(a):
    print('Square root will be :', math.sqrt(a))

def root(a):
    num = float(input('Which root do you want : '))
    print('It is :', math.pow(a, 1/num))

def logcalc(a):
    base = float(input('To what base do you want the log value to be : '))
    print(f'log of {a} to the base {base} will be', math.log(a, base))

def leastcm(num1, num2):
    print('LCM will be :', math.lcm(int(num1), int(num2)))

def highestcm(num1, num2):
    print('HCF/GCD will be :', math.gcd(int(num1), int(num2)))

def factorial_num():
    num1 = int(input('Enter the number for factorial (make sure it is non decimal) : '))
    print(f'Factorial of {num1} will be :', math.factorial(num1))

# Trigonometric Functions

def angle_input():
    angle = float(input('Enter value of the angle : '))
    return angle

def angleconvert(angle):
    which = int(input('Enter 1 to convert radians to degrees, or 2 for degrees to radians: '))
    if which == 1:
        print('In Degrees it will be :', math.degrees(angle))
    elif which == 2:
        print('In Radians it will be :', math.radians(angle))
    else:
        print('Something went wrong, try again.')

def cosine(angle):
    print(f'cos({angle}) =', math.cos(angle))

def sine(angle):
    print(f'sin({angle}) =', math.sin(angle))

def tangent(angle):
    print(f'tan({angle}) =', math.tan(angle))

def cosinv(angle):
    print(f'acos({angle}) in degrees =', math.degrees(math.acos(angle)))

def sininv(angle):
    print(f'asin({angle}) in degrees =', math.degrees(math.asin(angle)))

def taninv(angle):
    print(f'atan({angle}) in degrees =', math.degrees(math.atan(angle)))

# Geometric Calculations

def areasquare():
    s = float(input('Enter side of the square : '))
    print(f'Area = {s*s} sq. units')

def arectangle():
    length, breadth = map(float, input('Enter length and breadth of the rectangle separated by spaces: ').split())
    print(f'Area = {length * breadth} sq. units')

def atriangle():
    s1, s2, s3 = map(float, input('Enter all three sides of the triangle separated by spaces : ').split())
    s = (s1 + s2 + s3) / 2
    area = math.sqrt(s * (s - s1) * (s - s2) * (s - s3))
    print('Area of the triangle will be :', area)


def main():
    menu_main = ('\nSelect calculation type (0 to exit):\n'
                 '1. Basic Math\n'
                 '2. Trigonometric Functions\n'
                 '3. Geometric Calculations')
    menu_basic = ('\nBasic Math Options:\n'
                  'a. Power Raise\n'
                  'b. Remainder\n'
                  'c. Square Root\n'
                  'd. Nth Root\n'
                  'e. Logarithm\n'
                  'f. Factorial\n'
                  'g. LCM\n'
                  'h. HCF/GCD')
    menu_trig = ('\nTrigonometric Options:\n'
                 'a. Convert Angle (rad<->deg)\n'
                 'b. Cosine\n'
                 'c. Sine\n'
                 'd. Tangent\n'
                 'e. Inverse Sine\n'
                 'f. Inverse Cosine\n'
                 'g. Inverse Tangent')
    menu_geom = ('\nGeometric Options:\n'
                 'a. Square Area\n'
                 'b. Rectangle Area\n'
                 'c. Triangle Area')

    while True:
        print(menu_main)
        choice = input('Enter choice: ')
        if choice == '0':
            print('Goodbye!')
            break

        if choice == '1':
            print(menu_basic)
            sub = input('Enter option: ').lower()
            if sub == 'a':
                a = single_num(); power_raise(a)
            elif sub == 'b':
                a = single_num(); remainder(a)
            elif sub == 'c':
                a = single_num(); sroot(a)
            elif sub == 'd':
                a = single_num(); root(a)
            elif sub == 'e':
                a = single_num(); logcalc(a)
            elif sub == 'f':
                factorial_num()
            elif sub == 'g':
                x, y = two_num(); leastcm(x, y)
            elif sub == 'h':
                x, y = two_num(); highestcm(x, y)
            else:
                print('Invalid option, please try again.')

        elif choice == '2':
            angle = angle_input()
            print(menu_trig)
            sub = input('Enter option: ').lower()
            if sub == 'a':
                angleconvert(angle)
            elif sub == 'b':
                cosine(angle)
            elif sub == 'c':
                sine(angle)
            elif sub == 'd':
                tangent(angle)
            elif sub == 'e':
                sininv(angle)
            elif sub == 'f':
                cosinv(angle)
            elif sub == 'g':
                taninv(angle)
            else:
                print('Invalid option, please try again.')

        elif choice == '3':
            print(menu_geom)
            sub = input('Enter option: ').lower()
            if sub == 'a':
                areasquare()
            elif sub == 'b':
                arectangle()
            elif sub == 'c':
                atriangle()
            else:
                print('Invalid option, please try again.')

        else:
            print('Invalid selection, please choose 1, 2, 3 or 0.')

if __name__ == '__main__':
    main()                   
