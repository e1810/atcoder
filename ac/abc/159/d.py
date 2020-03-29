n, *a = map(int, open(0).read().split())
x = [0]*n
for i in a: x[i-1] += 1
c = sum([i*(i-1)//2 for i in x])

z = [c - x[i]*(x[i]-1)//2 + (x[i]-1)*(x[i]-2)//2 for i in range(n)]
for i in a: print(z[i-1])
