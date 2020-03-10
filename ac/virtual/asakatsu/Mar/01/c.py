n, k = map(int, input().split())

ans = 0
for i in range(n):
	m = i+1
	cnt = 1
	while m<k:
		m *= 2
		cnt /= 2
	ans += cnt
ans /= n
print(ans)
	
