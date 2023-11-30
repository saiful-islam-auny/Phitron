class calculator:
    brand = 'Casio'

    def add(self, a, b):
        text = f'Addition of {a} + {b}: {a+b}'
        return text
    def sub(self, a, b):
        text = f'Substraction of {a} - {b}: {a-b}'
        return text
    def mul(self, a, b):
        text = f'Multiplication of {a} * {b}: {a*b}'
        return text


obj = calculator()

print(obj.add(5,5))
print(obj.sub(10,3))
print(obj.mul(5,5))
