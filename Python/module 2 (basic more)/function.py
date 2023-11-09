def summation(num1, num2):
    result = num1+num2
    return result


def double(num1):
    result = num1*2
    return result

num1 = input("Enter 1st number: ")
num2 = input("Enter 2nd number: ")
num1 = int(num1)
num2 = int(num2)

total = summation(num1,num2)

print("Total sum :", total)


