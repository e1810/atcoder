for qq in range(int(input())):
	n = int(input())
	a = [list(map(int, input().split())) for i in range(n)]
	k = sum([a[i][i]for i in range(n)])
	r = sum([len(set(i))!=len(i) for i in a])
	c = sum([len(set(i))!=len(i) for i in zip(*a)])
	print("Case #%d: %d %d %d" % (qq+1, k, r, c))
