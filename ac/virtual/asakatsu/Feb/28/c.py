n, *a = map(int, open(0).read().split())
a.sort()

b = []
prev = cnt = 0
for i in range(n):
	if prev==a[i]: cnt+=1
	else:
		if cnt>1: b.append([prev, cnt])
		cnt = 1
	prev = a[i]
if cnt>1: b.append([prev, cnt])

h, w = 0, 0
for i, cnt in b:
	if cnt>3: h, w = i, i
	else: h, w = max(h, w), i
print(h*w)
