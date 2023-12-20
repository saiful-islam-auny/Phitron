class Human:
    cart = [] #static attribute

    def __init__(self, name) -> None:
        self.name = 'auny' #instance attribute

    @classmethod
    def location(self, name):
        print(f'{name} e ghurte aisi')

    @staticmethod
    def add(a,b): #self er dorkar nai
        add =  a+b
        print(f'Sum : {add}')



Human.location('khulna') # @classmethod declear korar jonno direct access kora gese instance chara
Human.add(5,10)