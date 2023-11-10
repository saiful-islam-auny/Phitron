person = {'name' : 'auny', 'age':23, 'location':'khulna'}

person['language'] = 'Bangla'
person['name'] = 'saiful'
print(person) #key : value
print(person.keys())
print(person.values())

person.pop('age')

for key,value in person.items():
    print(key,':', value)


