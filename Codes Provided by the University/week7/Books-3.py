# OO Demonstration 3 - Store the books in a list

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

# instantiate Book
book1 = Book("Greg M. Perry & Dean Miller",2014,"C Programming")

# instantiate again (for a different book)
book2 = Book("John Hunt",2019,"A Beginners Guide to Python 3 Programming")

bookList = [] # create an empty list

# append book objects to the bookList list
bookList.append(book1)
bookList.append(book2)

# loop through list to print book details
for book in bookList:
    book.printBook()

