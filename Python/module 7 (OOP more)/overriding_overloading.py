class Person:
    def __init__(self, name, age, location) -> None:
        self.name = name
        self.age = age
        self.lcaotion = location

    def eat(self):
        print("Eat Beef")

    def help(self):
        raise NotImplementedError

class Hindu(Person):
    def __init__(self, name, age, location, upadhi) -> None:
        self.upadhi = upadhi
        super().__init__(name, age, location)

    #........................................................ Overriding    
    def eat(self):
        print("Eat Mutton")
    
    def help(self):
        print("help 100 tk")

class muslim(Person):
    def __init__(self, name, age, location, upadhi) -> None:
        self.upadhi = upadhi
        super().__init__(name, age, location)
    #........................................................ Overriding   
    def eat(self):
        print("Eat Beef & Mutton")

    def help(self):
        print("help 200 tk")
    
    #........................................................ Overloading
    def __add__(self, other):
        return self.age + other.age
    
suvro = Hindu("Suvro", 25, 'Khulna', 'Dash')
saiful = muslim('saiful islam', 24, 'khulna', 'chowdhury')
mou = muslim('mou', 24, 'khulna', 'rahman')

print(saiful + mou)

