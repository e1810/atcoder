for C in range(int(input())):
	k = [0, 0]
	n = int(input())
	ans = [[] for i in range(n)]
	cant = False
	be = sorted([list(map(int, input().split()))+[i]for i in range(n)])
	for b, e, i in be:
		if k[0]<=b:
			if k[1]<=b:
				if k[0]<k[1]:
					ans[i] = "C"
					k[1] = e
				else:
					ans[i] = "J"
					k[0] = e
			else:
				ans[i] = "J"
				k[0] = e
		else:
			if k[1]<=b:
				ans[i] = "C"
				k[1] = e
			else: cant = True
	
	print("Case #%d:" % (C+1), end=" ")
	if cant: print("IMPOSSIBLE")
	else: print("".join(ans))
					
