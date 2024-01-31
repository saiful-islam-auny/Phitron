class Product:
    def __init__(self, name, price, quantity) -> None:
        self.product_name = name
        self.product_price = price
        self.product_quantity = quantity


class Shop:
    def __init__(self) -> None:
        self.products = []

    def add_product(self, product):
        self.products.append(product)

    def buy_product(self, name, quantity):
        for item in self.products:
            if item.product_name == name:
                if item.product_quantity >= quantity:
                    item.product_quantity -= quantity
                    print(f'Congrats! {name} is Succesfully purchased')
                elif item.product_quantity == 0:
                    print(f'Sorry, {name} is out of stock.')
                else:
                    print(f'Not enough {name} in stock.')
                return

        print(f'Sorry, {name} is not available in the shop.')


p1 = Product('Pen', 5, 15)
p2 = Product('Pencil', 10, 10)
p3 = Product('Khata', 50, 5)

my_shop = Shop()

my_shop.add_product(p1)
my_shop.add_product(p2)
my_shop.add_product(p3)

my_shop.buy_product('Pen', 5)
my_shop.buy_product('Eraser', 1)
my_shop.buy_product('Khata', 5)
my_shop.buy_product('Khata', 2)
