#-------------------------------- function inside a function
def country():
    print('Bangladesh')
    
    def city():
        print('Khulna')
        return 1
    return city

print(country()())


#-------------------------------- function as a parameter
def winter():
    print('I love winter season')

def do_something(work):
    print('I love programming')
    work()
    print('I love watcing movie')


do_something(winter)