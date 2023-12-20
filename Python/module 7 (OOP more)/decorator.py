import math

def fun1(fun):
    def fun2(*args):
        print('hi')
        fun(*args)
        print('bye')
    return fun2

@fun1 #---------Decorator
def hello(n):
    result = math.factorial(n)
    print(result)

hello(3)

