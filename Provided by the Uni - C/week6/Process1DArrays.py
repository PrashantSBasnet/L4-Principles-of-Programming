# Compare with Process1DArrays.c from Week 4

# Open the data file
f = open ("mylist_input.txt", "rt")

# Create an empty array myList of size
size = 10
myList = [0]*size

# Tell the users we are reading a file
print ("Read %i values from a file:" % size)

# read the file into an array of strings (separate data items by space)
inputArray = f.read().split(" ")
f.close()

# Convert array of strings to an array of floats
counter=0
while counter<10:
    # Convert each string in inputArray into a float in myList
    myList[counter] = float(inputArray[counter])
    counter +=1

# Process the array
print ("The %i values from the array:" % size)
total=0
max=0
for value in myList:
    total = total + value
    if max>value:
        max=value 
    print (value, end=" ") # print each value

print() # start new line after printing the array

print ("The total is: %.1f" % total )
print ("The maximum is: %.1f" % max )
