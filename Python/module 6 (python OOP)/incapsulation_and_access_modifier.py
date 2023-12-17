class Bank:
    def __init__(self, name, initial_deposite) -> None:
        self.holder_name = name #public
        self._branch = 'Khulna' #protected
        self.__balance = initial_deposite #private
    
    def deposite(self, balance):
        self.__balance += balance
    
    def get_balance(self):
        return self.__balance
    
auny = Bank('saiful islam', 5000)

# print(auny.__balance)  এভাবে এক্সেস করা জাবেনা কারন প্রটেকটেড
print(auny.get_balance())
auny.deposite(5000)
print(auny.get_balance())
