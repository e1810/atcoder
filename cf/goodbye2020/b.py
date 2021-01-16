for qt in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))

	used = [0] * (2*n+10)
	for i in a:
		if used[i]:
			used[i+1] = 1
		else:
			used[i] = 1
	
	ans = 0
	for x in used:
		ans += x
	print(ans)
