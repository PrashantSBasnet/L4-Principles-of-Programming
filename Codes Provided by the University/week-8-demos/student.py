# Restructured version of association.py 
# Putting the Student class in its own file

class Student:
    def __init__(self, name):
        self.name = name

    def getStudentName(self):
        return self.name

    def setLecturer(self, lecturer):
        self.lecturer = lecturer

    def display(self):
        print("%s is taught by %s" % (self.name, self.lecturer.getLecturerName()))

