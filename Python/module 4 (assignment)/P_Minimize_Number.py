n = int(input())

numbers = list(map(int, input().split()))

count=0
flag=1
while True:

    for i in range(n):

        if(numbers[i]%2!=0):
            print(count)
            flag=0
            break
        else:
            numbers[i]=numbers[i]/2
    count+=1

    if(flag==0):
        break