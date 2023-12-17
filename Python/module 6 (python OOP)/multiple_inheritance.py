class Phone:
    def __init__(self, brand, price, ram) -> None:
        self.brand = brand
        self.price = price
        self.ram = ram

class Book:
    def __init__(self, name, writer, page) -> None:
        self.name = name
        self.writer = writer
        self.page = page
    
class Access(Phone, Book):
    def __init__(self, brand, price, ram, name, writer, page) -> None:
        Phone.__init__(brand,price, ram)
        Book.__init__(name, writer, page)