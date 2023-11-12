n = int(input())
numbers = []
numbers2 = []

# Input the entire line and split it into a list of strings
input_line = input().split()

# Convert each string to an integer and append to the list
for i in range(n):
    num = int(input_line[i])
    numbers.append(num)
    numbers2.append(num)

numbers2.reverse()

if numbers==numbers2:
    print('YES')
else:
    print('NO')
