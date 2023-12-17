import math

# Base class
class Shape:
    def area(self):
        pass

# Derived class 1
class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return math.pi * self.radius ** 2

# Derived class 2
class Square(Shape):
    def __init__(self, side_length):
        self.side_length = side_length

    def area(self):
        return self.side_length ** 2

# Function demonstrating polymorphism
def print_area(shape):
    print(f"Area: {shape.area()}")

# Create instances of Circle and Square
circle = Circle(radius=5)
square = Square(side_length=4)

# Call the print_area function with different shapes
print_area(circle)  # Output: Area: 78.53981633974483 (pi * 5^2)
print_area(square)  # Output: Area: 16 (4^2)
