A, B, m = map(int, input().split())
a, b = [list(map(int, input().split()))for i in range(2)]

ans = min(a) + min(b)
for i in range(m):
	x, y, c = map(int, input().split())
	ans = min(ans, a[x-1]+b[y-1]-c)
print(ans)


