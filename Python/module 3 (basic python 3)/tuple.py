def multiple():
    return 1,2,3

print(multiple())

things = 'pen', 'pencil', 'book', 'note'
print(things)
print(type(things))

print(things[-2])

if 'book' in things:
    print("Yes")

for item in things:
    print(item)

print(len(things))

mega = ([1,2,3], [4,5,6])
mega[0][1] = 100

print(mega)