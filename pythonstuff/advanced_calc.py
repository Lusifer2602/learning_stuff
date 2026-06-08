import math


# ----------------------------
# INPUT HELPERS
# ----------------------------

def get_float(prompt):
    while True:
        try:
            return float(input(prompt))
        except ValueError:
            print("Invalid number. Try again.")


def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            print("Enter a valid integer.")


# ----------------------------
# BASIC MATH
# ----------------------------

def power():
    num = get_float("Number: ")
    exp = get_float("Power: ")
    print("Result =", num ** exp)


def remainder():
    num = get_float("Number: ")
    div = get_float("Divide by: ")

    if div == 0:
        print("Cannot divide by zero.")
        return

    print("Remainder =", num % div)


def square_root():
    num = get_float("Number: ")

    if num < 0:
        print("Cannot square-root a negative number.")
        return

    print("Result =", math.sqrt(num))


def nth_root():
    num = get_float("Number: ")
    root = get_float("Root: ")

    if root == 0:
        print("Root cannot be zero.")
        return

    print("Result =", num ** (1/root))


def logarithm():
    num = get_float("Number: ")
    base = get_float("Base: ")

    if num <= 0:
        print("Number must be positive.")
        return

    if base <= 0 or base == 1:
        print("Invalid base.")
        return

    print("Result =", math.log(num, base))


def factorial():
    num = get_int("Integer: ")

    if num < 0:
        print("Factorial requires a non-negative integer.")
        return

    print("Result =", math.factorial(num))


def lcm():
    a = get_int("First integer: ")
    b = get_int("Second integer: ")

    print("LCM =", math.lcm(a, b))


def gcd():
    a = get_int("First integer: ")
    b = get_int("Second integer: ")

    print("GCD =", math.gcd(a, b))


# ----------------------------
# TRIGONOMETRY
# ----------------------------

def angle_input():
    angle = get_float("Angle value: ")

    unit = input(
        "Enter D for degrees or R for radians: "
    ).lower()

    if unit == "d":
        return math.radians(angle)

    return angle


def convert_angle():
    choice = input(
        "1. Radians -> Degrees\n"
        "2. Degrees -> Radians\n"
        "Choice: "
    )

    angle = get_float("Value: ")

    if choice == "1":
        print("Result =", math.degrees(angle))

    elif choice == "2":
        print("Result =", math.radians(angle))

    else:
        print("Invalid choice.")


def sine():
    angle = angle_input()
    print("sin =", math.sin(angle))


def cosine():
    angle = angle_input()
    print("cos =", math.cos(angle))


def tangent():
    angle = angle_input()
    print("tan =", math.tan(angle))


def inverse_sine():
    x = get_float("Value (-1 to 1): ")

    if -1 <= x <= 1:
        print("Angle =", math.degrees(math.asin(x)))
    else:
        print("Input must be between -1 and 1.")


def inverse_cosine():
    x = get_float("Value (-1 to 1): ")

    if -1 <= x <= 1:
        print("Angle =", math.degrees(math.acos(x)))
    else:
        print("Input must be between -1 and 1.")


def inverse_tangent():
    x = get_float("Value: ")
    print("Angle =", math.degrees(math.atan(x)))


# ----------------------------
# GEOMETRY
# ----------------------------

def area_circle():
    r = get_float("Radius: ")

    if r < 0:
        print("Radius cannot be negative.")
        return

    print("Area =", math.pi * r * r)


def area_square():
    s = get_float("Side: ")
    print("Area =", s * s)


def area_rectangle():
    l = get_float("Length: ")
    b = get_float("Breadth: ")
    print("Area =", l * b)


def area_triangle():
    a = get_float("Side 1: ")
    b = get_float("Side 2: ")
    c = get_float("Side 3: ")

    if a+b <= c or a+c <= b or b+c <= a:
        print("Invalid triangle.")
        return

    s = (a+b+c)/2

    area = math.sqrt(
        s*(s-a)*(s-b)*(s-c)
    )

    print("Area =", area)


def sphere_surface_area():
    r = get_float("Radius: ")
    print("Surface Area =", 4 * math.pi * r**2)


def cylinder_surface_area():
    r = get_float("Radius: ")
    h = get_float("Height: ")

    print(
        "Surface Area =",
        2 * math.pi * r * (r + h)
    )


# ----------------------------
# MENUS
# ----------------------------

def basic_menu():
    operations = {
        "a": power,
        "b": remainder,
        "c": square_root,
        "d": nth_root,
        "e": logarithm,
        "f": factorial,
        "g": lcm,
        "h": gcd
    }

    print("""
a. Power
b. Remainder
c. Square Root
d. Nth Root
e. Log
f. Factorial
g. LCM
h. GCD
""")

    choice = input("Choice: ").lower()

    if choice in operations:
        operations[choice]()
    else:
        print("Invalid choice.")


def trig_menu():
    operations = {
        "a": convert_angle,
        "b": cosine,
        "c": sine,
        "d": tangent,
        "e": inverse_sine,
        "f": inverse_cosine,
        "g": inverse_tangent
    }

    print("""
a. Angle Conversion
b. Cosine
c. Sine
d. Tangent
e. Sin Inverse
f. Cos Inverse
g. Tan Inverse
""")

    choice = input("Choice: ").lower()

    if choice in operations:
        operations[choice]()
    else:
        print("Invalid choice.")


def geometry_menu():
    operations = {
        "a": area_circle,
        "b": area_square,
        "c": area_rectangle,
        "d": area_triangle,
        "e": cylinder_surface_area,
        "f": sphere_surface_area
    }

    print("""
a. Circle Area
b. Square Area
c. Rectangle Area
d. Triangle Area
e. Cylinder Surface Area
f. Sphere Surface Area
""")

    choice = input("Choice: ").lower()

    if choice in operations:
        operations[choice]()
    else:
        print("Invalid choice.")


# ----------------------------
# MAIN
# ----------------------------

def main():

    while True:

        print("""
1. Basic Math
2. Trigonometry
3. Geometry
0. Exit
""")

        choice = input("Choice: ")

        if choice == "1":
            basic_menu()

        elif choice == "2":
            trig_menu()

        elif choice == "3":
            geometry_menu()

        elif choice == "0":
            print("Goodbye.")
            break

        else:
            print("Invalid option.")


if __name__ == "__main__":
    main()