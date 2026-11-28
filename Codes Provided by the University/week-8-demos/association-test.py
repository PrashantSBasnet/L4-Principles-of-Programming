# Restructured version of association.py 
# Importing classes from student.py and lecturer.py

from student import Student
from lecturer import Lecturer

aStudent = Student("Mary")
aLecturer = Lecturer("Tim")

aStudent.setLecturer(aLecturer)
aLecturer.setStudent(aStudent)
aStudent.display()
aLecturer.display()