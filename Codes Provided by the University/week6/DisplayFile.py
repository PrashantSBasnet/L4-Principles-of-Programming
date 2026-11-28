# This will display the contents of any text file

# Prompt for file name
fname = input("Enter name of file:")

# Read and display each line
inFile = open(fname, "rt")
for line in inFile:
    # NB no newline character - we assume that these are in the data file
    print(line, end="")
inFile.close()

# New line after displaying file  
print()

