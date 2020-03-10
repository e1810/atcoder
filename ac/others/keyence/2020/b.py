n = int(input())
xls = [list(map(int, input().split()))for i in range(n)]
xls.sort(key=lambda x:sum(x))

ans = 0
now = -1e11
for i in range(n):
    if now<=xls[i][0]-xls[i][1]:
        ans += 1
        now = xls[i][0]+xls[i][1]
print(ans)
