for qq in range(int(input())):
	n, t = map(int, input().split())
	a = list(map(int, input().split()))
	
	dt0 = {}
	dt1 = {}
	ans = [0] * n
	for i in range(n):
		if not(t-a[i] in dt0.keys()):
			ans[i] = 0
			dt0[a[i]] = 1
		elif not(t-a[i] in dt1.keys()):
			ans[i] = 1
			dt1[a[i]] = 1
		else:
			if dt0[t-a[i]]<dt1[t-a[i]]:
				ans[i] = 0
				dt0[a[i]] += 1
			else:
				ans[i] = 1
				dt1[a[i]] += 1
	print(*ans)


