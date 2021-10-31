for qt in range(int(input())):
	n, c = map(int, input().split())
	a = list(range(1, n+1))
	
	c -= n-1
	if c<0:
		print("Case #%d: IMPOSSIBLE" % (qt+1))
		continue
	for i in range(n-2, -1, -1):
		if n-i <= c+1:
			a[i:] = a[i:][::-1]
			c -= n-i-1
		else:
			a[i:i+c+1] = a[i:i+c+1][::-1]
			c = 0
	if c>0:
		print("Case #%d: IMPOSSIBLE" % (qt+1))
		continue
	print("Case #%d: " % (qt+1), end="")
	print(*a, sep=" ")

