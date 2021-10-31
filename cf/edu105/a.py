for qt in range(int(input())):
	s = input()

	NG = True
	for i in range(8):
		t = s.replace("A", "()"[(i&1)==0]).replace("B", "()"[(i&2)==0]).replace("C", "()"[(i&4)==0])

		ng = False
		cnt = 0
		for c in t:
			if c=="(": cnt += 1
			else: cnt -= 1
			if cnt<0: ng = True
		if cnt!=0: ng = True
		
		if not ng: NG = False
	
	print("YNEOS"[NG::2])




