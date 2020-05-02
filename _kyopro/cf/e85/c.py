for qq in range(int(input())):
	n = int(input())
	ab = [list(map(int, input().split())) for i in range(n)]

	mn = 1e18
	sm = 0
	for i in range(n):
		x = ab[i][0] - max(0, ab[i][0]-ab[i-1][1])
		if(x<=mn): mn = x
		sm += max(0, ab[i][0]-ab[i-1][1])
	print(mn+sm)
