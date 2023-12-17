class Device:
    def __init__(self, brand, price, color,  ram, rom, origin) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.origin = origin
        self.ram = ram
        self.rom = rom

    def run(self):
        return f'running brand: {self.brand}'


class Laptop:
    def __init__(self, weight, ssd) -> None:
        self.weight = weight
        self.ssd = ssd

    def coding(self):
        return f'learning python'


class Phone(Device):
    def __init__(self, brand, price, color, ram, rom, origin, dual_sim) -> None:
        self.dual_sim = dual_sim
        super().__init__(brand, price, color, ram, rom, origin) #for inheritance

    def phone_call(self, number, text):
        return f'senfing SMS to {number} with :{text}'

    def __repr__(self) -> str:
        return f'Brand: {self.brand}, Price: {self.price}, Color: {self.color}, Ram & Rom: {self.ram}-{self.rom}, Origin: {self.origin}, Dual sim: {self.dual_sim}'


my_phone = Phone('Realmi', 1300, 'Green', 4, 64, 'Global', True)
print(my_phone)
