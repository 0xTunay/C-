mas = [1,43,53,56,41,54,34,12,123,85]

element=max(mas)
print('max element arr :',element)
 
count_b=0
count_m=0
count_r=0
for i in mas:
    if i>element:
        print(i,">",element)
        count_b+=1
    elif i<element:
        print(i,"<",element)
        count_m+=1
    elif i==element:
        print(i,"=",element)
        count_r+=1
print("element's >",count_b)
print("element's <",count_m)
print("element's ==",count_r)

num = []
s = 0
for i in range(10) :
    num.append(int(input()))
    if num[-1] > 5 :
        s += num[-1]
print(num)
print(s)