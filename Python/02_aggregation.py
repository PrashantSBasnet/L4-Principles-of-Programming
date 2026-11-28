"""
AGGREGATION – Weak Has-A Relationship

Aggregation is a special type of association. One class contains
references to objects of another class.

IMPORTANT:
1. It represents a HAS-A relationship.
2. The containing class does not own the lifecycle of the contained objects.
3. The contained objects are created independently.
4. They can exist even if the containing object is deleted.

REAL-WORLD EXAMPLE:
A Department has multiple Teachers. Teachers can exist independently
of the Department.
"""


class Teacher:
    def __init__(self, name):
        self.name = name

    def display(self):
        print(f"Teacher: {self.name}")


class Department:
    def __init__(self, department_name, teachers):
        self.department_name = department_name

        # Aggregation: receive already-created Teacher objects.
        # The Department stores references to these independent objects.
        self.teachers = teachers

    def display_teachers(self):
        print(f"Department: {self.department_name}")

        for teacher in self.teachers:
            teacher.display()


if __name__ == "__main__":
    # Create Teacher objects independently.
    teacher1 = Teacher("Ram")
    teacher2 = Teacher("Sita")

    # Pass existing Teacher objects to the Department.
    department = Department(
        "Computer Science",
        [teacher1, teacher2]
    )

    department.display_teachers()

    # Delete the Department object.
    del department

    # The Teacher objects still exist independently.
    teacher1.display()
    teacher2.display()
