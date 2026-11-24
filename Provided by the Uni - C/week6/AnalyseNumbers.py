# Array Analysis (compare with AnalyseNumbers.c in Week 4)
size = int(input("Enter the number of real numbers: "))

# Initialise array of size
myList = [0]*size

# Prompt user
print("Enter the real numbers: ")

sum=0

# Enter values one per line
for i in range(size):
    myList[i] = float(input())
    sum += myList[i]

average = sum / size
count = 0

# Compare each number in the array with the average and increment count if greater
for j in myList:
    if j > average:
        count += 1
    
print ("Average is %.2f" % average)
print ("Number of real numbers above the average is %i" % count)
