for qq in range(int(input())):
	n, m = map(int, input().split())
	a = sorted(map(int, input().split()), reverse=True)
	
	ans = sm = 0
	for i in range(n):
		sm += a[i]
		if(sm/(i+1) >= m): ans += 1
	print(ans)
