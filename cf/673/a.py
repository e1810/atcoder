for qq in range(int(input())):
	n, k = map(int, input().split())
	a = sorted(map(int, input().split()))
	ans = 0
	for i in range(1, n):
		ans += (k-a[i])//a[0]
	print(ans)

