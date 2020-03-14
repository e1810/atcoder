n, *a = map(int, open(0).read().split())
a = [0] + a
for i in range(n): a[i+1] += a[i]
a.sort()

b = []
prev = cnt = 0
for i in range(n+1):
	if prev==a[i]: cnt+=1
	else:
		b.append(cnt)
		cnt = 1
	prev = a[i]
b.append(cnt)

ans = 0
for i in b: ans += i*(i-1)//2
print(ans)
