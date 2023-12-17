class Animal:
    def __init__(self, name) -> None:
        self.name = name


class Dog(Animal):
    def __init__(self, name, bread) -> None:
        self.bread = bread
        super().__init__(name)


class Cat(Animal):
    def __init__(self, name, weight) -> None:
        self.weight = weight
        super().__init__(name)


billu = Cat('piko', 'mixed')

print(issubclass(Dog, Animal))
print(isinstance(billu, Animal))
