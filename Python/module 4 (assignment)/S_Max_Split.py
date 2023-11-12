def fun(s):
    store=[]
    count_s=0
    string=""
    for char in s:
        if char=='L':
            string+=char
            count_s+=1
        else :
            string+=char
            count_s-=1
            
        if count_s==0:
            store.append(string)
            string=""
    return store
  
s=input()
result=fun(s)

print(len(result))
# print(result)
for r in result:
    print(r)