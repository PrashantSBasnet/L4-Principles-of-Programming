"""
ASSOCIATION – Uses-A Relationship

Association represents a relationship between two independent classes.
One object uses or interacts with another object.

IMPORTANT:
1. Neither class owns the other.
2. Both objects can exist independently.
3. Deleting one object does not affect the other.

REAL-WORLD EXAMPLE:
A Student attends a Course. A Student can exist without a Course,
and a Course can exist without a Student.
"""


class Student:
    def __init__(self, name):
        self.name = name

    # The Student uses a Course object.
    # The Course object is passed as an argument.
    def attend_course(self, course):
        print(f"{self.name} is attending {course.course_name}")


class Course:
    def __init__(self, course_name):
        self.course_name = course_name


if __name__ == "__main__":
    # Create two independent objects.
    student1 = Student("Prashant")
    course1 = Course("Python Programming")

    # Establish an association: the student interacts with the course.
    student1.attend_course(course1)

    # The objects have independent lifecycles.
    del student1

    # The Course object still exists.
    print(course1.course_name)
