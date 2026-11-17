
# ==========================================
# 1. OPERATORS IN PYTHON
# ==========================================

a = 10
b = 3

# Arithmetic Operators
print("Addition:", a + b)
print("Subtraction:", a - b)
print("Multiplication:", a * b)
print("Division:", a / b)
print("Floor Division:", a // b)
print("Modulus:", a % b)
print("Exponent:", a ** b)

# Comparison Operators
print("Equal:", a == b)
print("Not Equal:", a != b)
print("Greater Than:", a > b)
print("Less Than:", a < b)
print("Greater or Equal:", a >= b)
print("Less or Equal:", a <= b)

# Logical Operators
x = True
y = False

print("AND:", x and y)
print("OR:", x or y)
print("NOT:", not x)

# Assignment Operators
c = 5
c += 2
print("Assignment:", c)


# ==========================================
# 2. COMMENTS IN PYTHON
# ==========================================

# This is a single-line comment.

"""
This is a multi-line string.
It is often used to write
multi-line documentation.
"""

print("Comments example")


# ==========================================
# 3. LOOPS IN PYTHON
# ==========================================

# FOR LOOP
print("For Loop:")

for i in range(1, 6):
    print(i)

# WHILE LOOP
print("While Loop:")

count = 1

while count <= 5:
    print(count)
    count += 1

# BREAK STATEMENT
for i in range(1, 6):
    if i == 3:
        break
    print(i)

# CONTINUE STATEMENT
for i in range(1, 6):
    if i == 3:
        continue
    print(i)


# ==========================================
# 4. CONDITIONAL STATEMENTS
# ==========================================

age = 18

if age >= 18:
    print("You are an adult.")

elif age >= 13:
    print("You are a teenager.")

else:
    print("You are a child.")


# ==========================================
# 5. PRINT (DIFFERENT FORMATS)
# ==========================================

name = "Ram"
age = 20
marks = 85.567

# Normal print
print("Hello World")

# Printing multiple values
print("Name:", name, "Age:", age)

# Using comma
print("Python", "Programming", "Language")

# Using sep
print("2026", "11", "17", sep="-")

# Using end
print("Hello", end=" ")
print("World")

# Using f-string
print(f"My name is {name} and I am {age} years old.")

# Using format()
print("My name is {} and I am {} years old.".format(name, age))

# Using % formatting
print("My name is %s and I am %d years old." % (name, age))

# Decimal formatting
print(f"Marks: {marks:.2f}")


# ==========================================
# 6. BOOLEANS IN PYTHON
# ==========================================

# Boolean has only two values: True and False

is_student = True
is_working = False

print("Is Student:", is_student)
print("Is Working:", is_working)

# Boolean using comparison
number = 10

print(number > 5)   # True
print(number < 5)   # False
print(number == 10) # True

# Boolean using logical operators
print(True and False)
print(True or False)
print(not True)


# ==========================================
# 7. NO SWITCH STATEMENT IN PYTHON
# ==========================================

# Python traditionally uses if, elif, and else
# instead of switch statements.

day = 2

if day == 1:
    print("Monday")

elif day == 2:
    print("Tuesday")

elif day == 3:
    print("Wednesday")

elif day == 4:
    print("Thursday")

elif day == 5:
    print("Friday")

else:
    print("Weekend or Invalid Day")
