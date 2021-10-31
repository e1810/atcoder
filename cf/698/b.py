for qt in range(int(input())):
	q, d = map(int, input().split())
	for a in map(int, input().split()):
		ng = True
		for i in range(1, 11):
			if d*i%10==a%10 and d*i<=a:
				ng = False
		print("YNEOS"[ng::2])
