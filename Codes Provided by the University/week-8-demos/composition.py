# Trivial example of composition
# A house contains a room, but this does nothing

class House:
    def __init__(self):
        self.room = Room()

class Room:
    pass

house = House()

