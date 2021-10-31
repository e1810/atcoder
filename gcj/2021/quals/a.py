for qt in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))

	ans = 0
	for i in range(n-1):
		mnidx = i
		for j in range(i, n):
			if a[mnidx] > a[j]:
				mnidx = j
		ans += mnidx - i + 1
		
		ra = a.copy()
		for j in range(i, mnidx+1):
			a[j] = ra[mnidx-j+i]
	print("Case #%d: %d" % (qt+1, ans))

