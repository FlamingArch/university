class ParentClass:
    def __init__(self):
        self._x = 1
        self.y = 10
    def print(self):
        print(self._x, self.y)

class ChildClass(ParentClass):
    def __init__(self):
        super().__init__()
        self._x = 2
        self.y = 20

c = ChildClass()
c.print()