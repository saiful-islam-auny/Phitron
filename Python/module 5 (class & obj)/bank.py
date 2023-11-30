class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.min_wid = 100
        self.max_wid = 100000

    def get_balance(self):
        return self.balance

    def widrow(self, amount):
        if amount < self.min_wid:
            print('Fokira')
        elif amount > self.max_wid:
            print('bank fokira')
        elif self.balance < amount:
            print('Not enought money to widrow')
        else:
            self.balance -= amount
            print(f'Successfully widrown, current balance is {self.get_balance()}')

    def diposite(self, amount):
        if amount > 0:
            self.balance += amount
            print(f'Successfully diposited, current balance is {self.get_balance()}')
        else:
            print('negative amount entered')


brack = Bank(5000)
brack.diposite(5000)
brack.diposite(5000)
brack.widrow(12000)
brack.widrow(5000)
