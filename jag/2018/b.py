n, ans = int(input()), 0
for i in (500, 100, 50, 10, 5, 1):
	t, n = divmod(n, i)
	ans += t
print(ans)
