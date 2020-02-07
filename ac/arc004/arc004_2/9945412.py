
n, *a = map(int, open(0).read().split())

print(sum(a))
if n==1: print(a[0])
elif n==2: print(abs(a[0]-a[1]))
else:
    a.sort()
    if(sum(a[:n-1])>=a[-1]): print(0)
    else: print(a[-1]-sum(a[:n-1]))
