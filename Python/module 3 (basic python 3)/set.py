num = [1,3,4,1,5,6,3]
num_set = set(num)

num_set.add(9)
num_set.add(25)
num_set.remove(1)
print(num_set)

# loof, condition can use

a = {1,5,6}
b = {1,2,3,6}

print(a&b)
print(a|b)