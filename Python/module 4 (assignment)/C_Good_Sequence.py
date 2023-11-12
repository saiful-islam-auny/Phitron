n = int(input())

freq = {}

items = list(map(int, input().split()))

for i in items:
    if i in freq:
        freq[i] += 1
    else:
        freq[i] = 1

result = 0
for key, value in freq.items():
    if key < value:
        result += value-key
    elif key > value:
        result+= value

print(result)
