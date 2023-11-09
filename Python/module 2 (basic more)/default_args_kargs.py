def sum (num1,num2,num3=5):
    return num1+num2+num3

# print("SUM :", sum(5,5,3))

def all_sum(*numbers):
    print(numbers)
    sum=0
    for i in numbers:
        sum+=i
    return sum

total = all_sum(1,2,3,4,5)
print("total Sum: ",total)