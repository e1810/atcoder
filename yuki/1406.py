n, *a = map(int, open(0).read().split())
x = (n - sum(a) % n) % n
ans = 0
for i in range(101):
	if i%n==x: ans += 1
print(ans)
