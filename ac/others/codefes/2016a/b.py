n, *a = map(int, open(0).read().split())

ans = 0
for i in range(n):
	if a[a[i]-1]==i+1: ans += 1
print(ans//2)
