
n = int(input())
ans = 0
for i in range(1,n+1,2):
	cnt = 0
	for j in range(1,i+1):
		cnt += (i%j==0)
	if cnt==8: ans+=1
print(ans)
