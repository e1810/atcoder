n,*a=map(int,open(0).read().split())
x = 0
for i in range(n): x ^= a[i]
for i in range(n): print(x ^ a[i])
