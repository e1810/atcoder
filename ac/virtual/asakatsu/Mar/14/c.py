n, a, b = map(int, input().split())
if a>b: ans = 0
elif n==1:
	if a==b: ans = 1
	else: ans = 0
else: ans = (b-a)*(n-2)+1
print(ans)
