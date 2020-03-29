for qq in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))

	ans = []
	prev = a[0]
	cnt = 0
	for i in a:
		if prev==i: cnt+=1
		else:
			ans.append([prev,cnt])
			cnt = 1
		prev = i
	ans.append([prev, cnt])
	
	l = len(ans)
	flag = (l%2 and ans[0][0]!=ans[-1][0] and not(ans[-1][0]==ans[1%l][0] or ans[0]==ans[-2%l][0))
	for i in range(l): ans[i][0] = i%2+1
	if flag: ans[0][0] = 3
	
	if l==1: print(1)
	elif flag: print(3)
	else: print(2)
	
	for e,p in ans:
		for i in range(p): print(e, end=" ")
	print()
		
		
