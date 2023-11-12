def full_name(fst, lst):
    name = f'{fst} {lst}'
    return name


# take parameters in orders
name = full_name('saiful', 'islam')
name = full_name(lst='islam', fst="Auny")
# print(name)

#def famus(**kargs)
def famous_name(fst, lst, **additional):
    # print(additional['title'])
    for key, value in additional.items():
        print(f'{key}: {value}')
    name = f'{fst} {lst}'
    return name


# name = famous_name(lst='islam', fst="Auny", title='Engineer', Dept='cse', loc='Khulna')
# print(name)



def a_lot(num1,num2):
    sum = num1+num2
    rem = num1-num2
    # return sum, rem #tupple hisebe jabe
    return [sum, rem] #list hisebe jabe

# print(a_lot(5,3))


def info(**all):
    print(all)
    for key, value in all.items():
        print(key,":",value)

info(name='Auny', age='24')
