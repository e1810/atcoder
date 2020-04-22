from itertools import permutations

def recur(grid, cnt, n):
	if cnt>0:
		for i in permutations(range(1, n+1)):
			recur(grid + [i], cnt-1, n)
	else:
		if sum([grid[i][i]for i in range(n)])!=k: return 
		cant = False
		for i in grid:
			if len(set(i))!=len(i): cant = True
		for i in zip(*grid):
			if len(set(i))!=len(i): cant = True
		if cant: return
		else:
			print("Case #%d: POSSIBLE" % (C+1))
			for i in grid: print(*i)
			raise END
		
	
for C in range(int(input())):
	n, k = map(int, input().split())
	try:
		recur([], n, n)
		print("Case #%d: IMPOSSIBLE" % (C+1))
	except: pass
