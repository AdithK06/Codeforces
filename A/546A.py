k,n,w=map(int,input().split())
total=0
borrow=0
for i in range(1,w+1):
    total+=i*k
if n>total:
    borrow=0
else:
    borrow=total-n
print(borrow)