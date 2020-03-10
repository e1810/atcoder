n = int(input())
a = [list(map(int, input().split())) for i in range(2)]

ans = 0
for i in range(n):
	cnt = flag = 0
	for j in range(n):
		if not flag: cnt += a[flag][j]
		if i==j: flag = 1
		if flag: cnt += a[flag][j]
	ans = max(ans, cnt)
print(ans)
