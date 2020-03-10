n = int(input())
fie = [list(input())for i in range(n)]

ans = 0
for i in range(n):
	for j in range(n):
		for k in range(j, n):
			if fie[j][(i+k)%n]!=fie[k][(i+j)%n]: break
		else: continue
		break
	else: ans += 1
print(ans*n)
