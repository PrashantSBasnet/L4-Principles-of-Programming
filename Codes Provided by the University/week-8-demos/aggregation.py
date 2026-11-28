# Example of aggregation

# Very simple address (only postcode)
class Address:
    def __init__(self, postcode):
        self.postCode = postcode

# A student has a name and an address object as instance variables
class Student:
    def __init__(self, name, address):
        self.name = name
        self.address = address

    def printInfo(self):
        print ("%s lives at %s" % \
              (self.name, self.address.postCode))

# instantiate address with postcode
ad = Address("BS16 3FT")

# instantiate student with name and address object
st = Student("Mary", ad)

st.printInfo()