for qq in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	can = prev = 0
	dct = {}
	for i in a:
		if i in dct.keys():
			if dct[i]==2: can = 1
			elif prev!=i: can = 1
		else:
			dct[i] = 1
		prev = i
	print("YNEOS"[1^can::2])

