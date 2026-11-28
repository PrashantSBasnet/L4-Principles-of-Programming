# This is an extended version of composition.py that
# does something!

# A House can have any number of rooms
class House:
    def __init__(self, noRooms): 
        # the constructor creates a list with noRooms elements
        self.noRooms = noRooms
        self.rooms = [] # empty list

        # initialise rooms list
        for n in range(0,noRooms):
            # add a new room to the list (number 0, colour "")
            self.rooms.append(Room(0,""))
        
    def displayRooms(self):
        # loop through the rooms list
        for n in self.rooms:
            print ("Room %i is %s " % (n.number, n.colour))

    # set data into the rooms list (room number and colour)
    def setRoom(self, n, number, colour):
        self.rooms[n].number = number
        self.rooms[n].colour = colour

# A room has a number and a colour
class Room:
    def __init__(self, number, colour):
        self.number=number
        self.colour=colour

# myHouse has 3 rooms
myHouse = House(3)

# set the number and colour of each room
myHouse.setRoom(0,1,"Green")
myHouse.setRoom(1,2,"Yellow")
myHouse.setRoom(2,3,"Red")

myHouse.displayRooms()