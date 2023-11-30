class shopping:
    def __init__(self, name, balance):
        self.name = name
        self.balance = balance
        self.cart = []

    def add_to_cart(self, item, price, quantity):
        items = {'item': item, 'price': price, 'quantity': quantity}
        self.cart.append(items)

    def checkout(self):
        total = 0
        for item in self.cart:
            total+= item['price'] * item['quantity']

        print(f'Balance: {self.balance}')
        print(f'Total: {total}')

        if total < self.balance:
            print(f'Succesfully Purches! Current balance {self.balance-total} Taka')
        else:
            print(f'Not enough balance! Need more {total - self.balance} taka')
        
    def remove_from_cart(self, item):
        for cart_item in self.cart:
            if cart_item['item'] == item:
                self.cart.remove(cart_item)
                print(f'Removed {item} from the cart.')
                break

saiful = shopping('saiful islam auny', 1500)

saiful.add_to_cart('Egg', 12, 30)
saiful.add_to_cart('rice', 80, 10)
saiful.add_to_cart('Dal', 40, 5)
saiful.add_to_cart('Tel', 70, 5)

saiful.checkout()

saiful.remove_from_cart('Egg')
saiful.add_to_cart('Egg', 12, 10)

saiful.checkout()