# Illustrate the association of Lecturer and Student
# Lecturer teaches Student and Student is taught by Lecturer

class Lecturer:
    def __init__(self, name):
        self.name = name

    def getLecturerName(self):
        return self.name

    # a student object is an instance variable of Lecturer
    def setStudent(self, student):
        self.student = student

    def display(self):
        print("%s teaches %s" % (self.name, self.student.getStudentName()))

class Student:
    def __init__(self, name):
        self.name = name

    def getStudentName(self):
        return self.name

    # a lecturer object is an instance variable of Student
    def setLecturer(self, lecturer):
        self.lecturer = lecturer

    def display(self):
        print("%s is taught by %s" % \
        (self.name, \
        self.lecturer.getLecturerName()))

# instantiate Student and Lecturer
aStudent = Student("Mary")
aLecturer = Lecturer("Tim")

# pass lecturer object into Student
aStudent.setLecturer(aLecturer)

# pass student object into Lecturer
aLecturer.setStudent(aStudent)

# Display relationship
aStudent.display()
aLecturer.display()