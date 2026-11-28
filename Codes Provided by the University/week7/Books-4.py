# OO Demonstration 4 - Store the books in a list, tidier version

# The Book class represents a generic "Book" data type
class Book:
    # Define class variables (i.e. static variables)
    numberBooks = 0 # counter for total number of books
    numberPrinted = 0 # counter for number of books printed

    # Constructor
    def __init__(self, authors, date, title): # Arguments are authors (string)
                                              # date (int) and title (string)

        self.authors=authors  # Copy data from constructor arguments into
        self.date=date        # instance variables.  NB the self variable 
        self.title=title      # identifies the instance of the class
        Book.numberBooks+=1   # increment book counter

    # printBook method
    def printBook(self):
        # display data in 'author (date) title' format
        print("%s (%i) %s" % (self.authors, self.date, self.title))
        Book.numberPrinted+=1 # increment counter for number printed

    # printInfo method - display usage statistics (number of books and number printed)
    def printInfo(self):
        print("\nBook summary")
        print("Number of books: %i" % Book.numberBooks)
        print("Number printed: %i" % Book.numberPrinted)

# instantiate book (returning a book object)
def instBook(authors, date, title):
    myBook = Book(authors, date, title)
    return myBook

bookList = [] # create an empty list

# add each book to list
bookList.append(instBook("Greg M. Perry & Dean Miller",2014,"C Programming"))
bookList.append(instBook("John Hunt",2019,"A Beginners Guide to Python 3 Programming"))
bookList.append(instBook("Brian Kernighan & Dennis Ritchie",1988,"The C Programming Language"))
bookList.append(instBook("Mark Lutz",2013,"Learning Python"))

# loop through list to print book details
for book in bookList:
    book.printBook()

# call the printInfo() method of the first element in the list.  
# NB since these variables are static it doesn't matter which
# book we use for this - they are all the same
bookList[0].printInfo()

# print books again, just to demonstrate that the print counter is working
print()
for book in bookList:
    book.printBook()

bookList[0].printInfo()  