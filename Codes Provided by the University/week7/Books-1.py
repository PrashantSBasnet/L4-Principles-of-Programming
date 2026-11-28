# OO Demonstration 1 - Simple book List

# The Book class represents a generic "Book" data type
class Book:
    
    # Constructor
    def __init__(self, authors, date, title): # Arguments are authors (string)
                                              # date (int) and title (string)

        self.authors=authors  # Copy data from constructor arguments into
        self.date=date        # instance variables.  NB the self variable 
        self.title=title      # identifies the instance of the class

    # printBook method
    def printBook(self):
        # display data in 'author (date) title' format
        print("%s (%i) %s" % (self.authors, self.date, self.title))

# instantiate Book
book1 = Book("Greg M. Perry & Dean Miller",2014,"C Programming")

# instantiate again (for a different book)
book2 = Book("John Hunt",2019,"A Beginners Guide to Python 3 Programming")

# disply the data by calling printBook for each object
book1.printBook()
book2.printBook()
