n = int(input())
a, b = [list(map(int, input().split())) for i in range(2)]

ap = bp = 0
for i in range(n):
	if a[i]>b[i]: bp += a[i]-b[i]
	else:
		if (b[i]-a[i])%2: bp += 1
		ap += (b[i]-a[i]+1)//2
print("YNeos"[ap<bp::2])
