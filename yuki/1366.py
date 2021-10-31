a, b = (list(map(int, input().split())) for i in(0,0))

ng = True
for i in range(3):
	for j in range(3):
		c = a.copy()
		d = b.copy()
		c[i], d[j] = d[j], c[i]
		if len(set(c))!=len(c): continue
		if len(set(d))!=len(d): continue
		if max(c)==c[1] or min(c)==c[1]:
			if max(d)==d[1] or min(d)==d[1]:
				ng = False
print("YNeos"[ng::2])

