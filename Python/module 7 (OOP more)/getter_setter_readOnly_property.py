# read only --> you can not set the value. value can not be changed

# getter --> get a value of a property through a method. Most of the time, you will get the value of a private attribute.

# setter --> set a value of a property through a method. Most of the time, you will set the value of a private property.



class Bank:
    def __init__(self, account_fee, name, age) -> None:
        self.__balance = account_fee   #private
        self._name = name   #protected
        self._age = age   #protected
    
    @property #getter ---- access_balance methode attribute hoye gese (readable)
    def access_balance(self):
        return self.__balance
    
    @access_balance.setter #setter ---- access_balance methode attribute hoye gese (changeable)
    def access_balance(self, money):
        self.__balance+= money
        

auny = Bank(500, 'auny', 23)

print(auny.access_balance) #() hbe na karon attribute
auny.access_balance = 100 #100 + hbe balance er sathe
print(auny.access_balance)