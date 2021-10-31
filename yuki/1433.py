n = int(input())
s = input()
a = list(map(int, input().split()))
for i in range(n):
	if s[i]=='B':
		a[i] *= -1

mn, mx, sm = 0, 0, 0
minans, maxans = 0, 0
for i in range(n):
	sm += a[i]
	mn = min(mn, sm)
	mx = max(mx, sm)
	minans = min(minans, mn-mx)
	maxans = max(maxans, mx-mn)
print(max(maxans, -minans))

