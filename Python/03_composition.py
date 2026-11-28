"""
COMPOSITION – Strong Has-A Relationship

Composition is a stronger form of aggregation. One class owns and
manages the objects of another class.

IMPORTANT:
1. It represents a STRONG HAS-A relationship.
2. The containing class creates its component objects.
3. The containing class manages them as part of its design.
4. Components are conceptually dependent on the owner.
5. In Python, deleting the owner does not automatically destroy
   referenced objects. Composition is a design concept, not automatic
   garbage collection.

REAL-WORLD EXAMPLE:
A House consists of Rooms. In this example, the House creates and
manages its Rooms.
"""


class Room:
    def __init__(self, room_name):
        self.room_name = room_name

    def display(self):
        print(f"Room: {self.room_name}")


class House:
    def __init__(self):
        # Composition: Room objects are created inside the House class.
        # The House manages these objects through its rooms list.
        self.rooms = [
            Room("Bedroom"),
            Room("Kitchen"),
            Room("Living Room")
        ]

    def display_rooms(self):
        print("House contains:")

        for room in self.rooms:
            room.display()


if __name__ == "__main__":
    # Creating a House also creates its Room objects.
    house = House()
    house.display_rooms()
