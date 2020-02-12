n, *a = map(int, open(0).read().split())

print(sum(a))
if n==1: print(a[0])
elif n==2: print(abs(a[0]-a[1]))
else:
    b = 2*max(a)-sum(a)
    if(b<0): print(0)
    else: print(b)
