n, *p = map(int, open(0).read().split())

ans = 0
for i in range(n-1):
	if p[i]==i+1:
		p[i], p[i+1] = p[i+1], p[i]
		ans += 1
if p[n-1]==n: ans += 1
print(ans)
