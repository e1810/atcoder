for i in range(int(input())):
	n = int(input())
	d = input()
	oo, oe = 0, 0
	eo, ee = 0, 0
	for i in range(n):
		if i%2:
			if int(d[i])%2: eo += 1
			else: ee += 1
		else:
			if int(d[i])%2: oo += 1
			else: oe += 1
	if n%2:
		if oo==0: print(2)
		else: print(1)
	else:
		if ee==0: print(1)
		else: print(2)

	
	
