from abc import ABC, abstractmethod

# Define an abstract class (Animal) with an abstract method (speak)
class Animal(ABC):
    @abstractmethod
    def speak(self):
        pass

# Create concrete subclasses (Dog and Cat) that inherit from the abstract class
class Dog(Animal):
    def __init__(self) -> None:
        super().__init__()
        return "Woof!"

class Cat(Animal):
    def speak(self):
        return "Meow!"

# Attempting to create an instance of the abstract class will result in an error
# animal = Animal()  # Uncommenting this line will raise an error

# Create instances of concrete subclasses
dog = Dog()
cat = Cat()

# Call the speak method on each instance
print("Dog says:", dog.speak())  # Output: Dog says: Woof!
print("Cat says:", cat.speak())  # Output: Cat says: Meow!
