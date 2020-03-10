n, *a = map(int, open(0).read().split())
ans = 0
for i in a:
	while i%2==0:
		i //= 2
		ans += 1
print(ans)
