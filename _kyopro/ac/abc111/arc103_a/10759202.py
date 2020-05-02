
n, *v = map(int, open(0).read().split())

a, b = [[[i,0]for i in range(100010)]for i in range(2)]
for i in range(n):
        if i%2: b[v[i]][1] += 1
        else: a[v[i]][1] += 1

a.sort(key=lambda x:-x[1])
b.sort(key=lambda x:-x[1])

if a[0][0]!=b[0][0]: print(n-a[0][1]-b[0][1])
else: print(n-max(a[0][1]+b[1][1], a[1][1]+b[0][1]))
