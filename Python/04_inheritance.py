"""
INHERITANCE – Is-A Relationship

Inheritance allows one class to acquire the attributes and methods
of another class.

IMPORTANT:
1. It represents an IS-A relationship.
2. The existing class is called the Parent/Base class.
3. The new class is called the Child/Derived class.
4. Child classes can reuse parent methods and attributes.
5. Child classes can also define their own methods.

REAL-WORLD EXAMPLE:
A Dog IS AN Animal. A Cat IS AN Animal.
"""


# Parent / Base class
class Animal:
    def __init__(self, name):
        self.name = name

    # Common method available to child classes.
    def eat(self):
        print(f"{self.name} is eating")


# Dog inherits from Animal.
class Dog(Animal):
    # Child-specific method.
    def bark(self):
        print(f"{self.name} is barking")


# Cat inherits from Animal.
class Cat(Animal):
    # Child-specific method.
    def meow(self):
        print(f"{self.name} is meowing")


if __name__ == "__main__":
    # Create child-class objects.
    dog = Dog("Buddy")
    cat = Cat("Kitty")

    # Call inherited methods from Animal.
    dog.eat()
    cat.eat()

    # Call child-specific methods.
    dog.bark()
    cat.meow()
