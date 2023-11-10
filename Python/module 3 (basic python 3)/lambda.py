def add(x, y): return x+y

# print(add(2,3))


def double(x): return x*2


numbers = [5, 4, 6, 9, 12]
# double_num = map(double, numbers)
double_num = map(lambda x: x*2, numbers)
# print(numbers)
# print(list(double_num))

students = [
    {'name': 'auny', 'age': 23, 'cg': 3.95},
    {'name': 'kaka', 'age': 26, 'cg': 3.35},
    {'name': 'kaki', 'age': 22, 'cg': 3.75},
]

good_cg = filter(lambda stu: stu['cg'] > 3.80, students)
less_age = filter(lambda age: age['age'] <= 25, students)

print(list(less_age))
