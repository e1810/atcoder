n, m = map(int, input().split())
a = [0]*(n+1)

for i in range(m):
	l, r = map(int, input().split())
	a[l-1] += 1
	a[r] -= 1
for i in range(n): a[i+1] += a[i]

print(a.count(m))
