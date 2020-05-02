from collections import Counter

for qq in range(int(input())):
	a, b, c = map(int, input().split())
	x, y, z  = [Counter(map(int, input().split())) for i in range(3)]
	
	xx, yy, zz = min(x), min(y), min(z)
	print(xx + yy + zz, x[xx] * y[yy] * z[zz] )

