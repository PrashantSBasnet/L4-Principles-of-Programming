# Compare with ComputeArea.c from week 2

PI = 3.14159

# Read radius as float
radius = float(input("Enter the radius: "))

# If the radius is not a negative number

if radius >=0:
    area = radius * radius * PI
    print ("The area for the circle ", end="")
    print ("of radius %.2f is %.2f" % (radius, area))
else:
    print("Radius cannot be negative")
