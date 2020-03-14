h, w, n, *a = map(int, open(0).read().split())

c = [[0]*w for i in range(h)]
i = j = 0
tor = True
for k in range(n):
	for x in range(a[k]):
		c[i][j] = k+1
		
		if tor:
			j += 1
			if j>=w:
				i += 1
				j = w-1
				tor = False
		else:
			j -= 1
			if j<0:
				i += 1
				j = 0
				tor = True
for i in c: print(*i)
