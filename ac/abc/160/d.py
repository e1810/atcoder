n, x, y = map(int, input().split())

ans = [0] * (n+1)
for i in range(1, n+1):
	for j in range(i+1, n+1):
		ans[min(j-i, abs(i-x)+1+abs(j-y))] += 1
for i in range(1, n): print(ans[i])
