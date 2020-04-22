for C in range(int(input())):
	a = [0] + list(map(int, list(input()))) + [0]
	par = [0]*(len(a)-1)
	for i in range(len(a)-1): par[i] = a[i+1] - a[i]
	
	print("Case #%d:" % (C+1), end=" ")
	for i in range(len(a)-2):
		if par[i]>0: print("("*par[i], end="")
		else: print(")"*-par[i], end="")
		print(a[i+1], end="")
	if par[len(a)-2]>0: print("("*par[len(a)-2])
	else: print(")"*-par[len(a)-2])
		
