#global
balance = 3000

def buying(item, price):
    global balance
    if price<=balance:
        balance-=price
        print(f'Blance after buying {item}: {balance}')
    else:
        print("insufficient balance!", balance)


while balance!=0:

    item = input('Enter Iteam you want to buy: ')

    if(item=='tshirt'):
        price = 500
    elif(item=='shirt'):
        price = 1000
    elif(item=='pant'):
        price = 1500

    buying(item, price)