n, m = map(int, input().split())
a = list(map(int, input().split()))
s = input()

b, mx, mn = [0]*3
for i in s:
	if i=='R': b += 1
	else: b -= 1
	mx = max(mx, b)
	mn = min(mn, b)
mx = min(mx, n-1)
mn = max(mn, -n+1)
b = min(mx, max(mn, b))

for i in range(-mn, 0, -1):
	a[i] += a[i-1]
	a[i-1] = 0
for i in range(n-mx-1, n-1):
	a[i] += a[i+1]
	a[i+1] = 0

if b>0: print(*([0]*b + a[:-b]))
else: print(*(a[b:] + [0]*-b))
