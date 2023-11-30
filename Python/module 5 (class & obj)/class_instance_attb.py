class Eid:
    def __init__(self, name):
        self.name = name
        self.total = []
        self.sum = 0

    def salami(self, name, amount):
        self.total.append((name, amount))
        self.sum+=amount

tahim = Eid('tahim')
tahim.salami('mother',50)
tahim.salami('father',100)
tahim.salami('uncle',30)

turhan = Eid('turhan')
turhan.salami('mother',10)
turhan.salami('father',20)
turhan.salami('uncle',30)

print(tahim.name)
print(tahim.total)
print(turhan.sum)

print(turhan.name)
print(turhan.total)
print(turhan.sum)