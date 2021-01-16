for qq in range(int(input())):
	x, y, a, b = map(int, input().split())
	c = abs(x-a)
	d = abs(y-b)
	print(c + d + 2*(c>0 and d>0))
