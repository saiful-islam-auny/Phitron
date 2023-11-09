#index =   0  1  2  3  4  5  6
numbers = [4, 5, 2, 3, 7, 1, 9]
#index =  -7 -6 -5 -4 -3 -2 -1

# print(numbers[4], numbers[-7])

#list (start : end)     start from the start index and end before the end index
# print(numbers[2 : 5])

#list (start : end : steps)
# print(numbers[2 : 6 : 2])
# print(numbers[6 : 2 : -1])
# print(numbers[6 : 2 : -2])
# print(numbers[2 : ])
# print(numbers[ : 5])
# print(numbers[ : : -1]) #reverse
# print(numbers[ : ]) #print all

numbers.append(50)  #insert in the last
print(numbers)

numbers.insert(2,100)   #insert in the postion
print(numbers) 

numbers.remove(100) #remove the element
print(numbers)

numbers.pop(0) #pop the index element
print(numbers)

numbers.reverse()
print(numbers)
print(numbers.index(9))


numbers.clear()
print(numbers)