n=int(input())
l=[]
sum=0
for i in range(n):
    l.append(float(input()))
    sum=sum+l[i]
avg=float(sum/n)
avg=round(avg,3)
tran=0
for i in l:
    if i>avg:
        tran=float(tran+round(i-avg,2))
print(tran)

