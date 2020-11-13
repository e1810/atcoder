s = list(input())
ans = n = len(s)
for i in range(1<<n):
    tmp = cnt = 0
    for j in range(n):
        if (i>>j)&1:
            tmp += int(s[j])
            cnt += 1
    if tmp%3==0:
        ans = min(ans, n-cnt)

if ans==n: print(-1)
else: print(ans)
