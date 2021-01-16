for qq in range(int(input())):
	n = int(input())
	s = input()

	R = L = True
	for i in range(n):
		if s[i]=="<": R = False
		if s[i]==">": L = False
	if R or L:
		print(n)
		continue
	
	ans = 0
	for i in range(n):
		if s[i]=="-" or s[(i+1)%n]=="-": ans += 1
	print(ans)


	

