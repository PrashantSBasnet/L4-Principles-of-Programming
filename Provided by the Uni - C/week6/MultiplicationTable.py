# Display 1-9 Multiplication Table
# Compare with MultiplicationTable.c from Week 3

print ("Multiplication Table")

# Display column headings 1 to 9
print("      ", end="")
for j in range(1,10):
    # Display J
    print(j, end="    ") # Align properly

# Display a line of hyphens
print ("\n      -------------------------------------------")

# Display rows 1 to 9
for i in range(1,10):
    print("%i |   " % i, end="")
    for j in range(1,10):
        # Display the product of i and j (4 character wide string, followed by a space)
        print("%-4s" % (i*j), end=" ")
    print()
