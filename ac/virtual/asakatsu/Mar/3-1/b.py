n = list(map(int, list(input()[::-1])))
l = len(n)

ans = dec = 0
for i in range(1<<l):
	cnt = 0
	for j in range(l):
		if j==l-1:
			cnt += n[j] - dec
			break
		if((i>>j)&1):
			cnt += 9
			dec = True
		else:
			cnt += n[j] - dec
			dec = False
	ans = max(ans, cnt)
print(ans)	
