n, p = map(int, input().split())
f = []
for i in range(1, int(p**0.5)+1):
	if p%i==0:
		f.append(i)
		f.append(p//i)
ans = 1
for i in f:
	if p%pow(i,n, 92709568269121)==0: ans = max(ans, i)
print(ans)	
	
	
