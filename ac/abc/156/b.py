n, k = map(int, input().split())
ans = 0
while n:
	ans += 1
	n //= k
print(ans)	
