# Restructured version of association.py 
# Putting the Lecturer class in its own file

class Lecturer:
    def __init__(self, name):
        self.name = name

    def getLecturerName(self):
        return self.name

    def setStudent(self, student):
        self.student = student

    def display(self):
        print("%s teaches %s" % (self.name, self.student.getStudentName()))


