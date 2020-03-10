n, *a=map(int,open(0).read().split())
ans = cnt = prev = 0
for i in a:
	if i>=prev: cnt+=1
	else: cnt=1
	ans = max(ans, cnt)
	prev = i
print(ans)
