def ThreeNplusOne(x):
    count=1
    while x!=1:
        if x%2==0:
            x=x/2
            count=count+1
        else:
            x=x*3+1
            count=count+1
    return count
x,y=[int(i) for i in input().split()]
if x>y:
    x,y=y,x
    k=x
    p=y
k=x
p=y
max=ThreeNplusOne(x)
while x<=y:
    ele=ThreeNplusOne(x)
    x=x+1
    if max>=ele:
        max=max
    else:
        max=ele
print('{} {}'.format(k,p),end='')        
print(max)

