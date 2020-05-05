n, d = map(int, input().split())
x = [list(map(int, input().split())) for i in range(n)]
ans = 0
for i in range(n):
    for j in range(i+1, n):
        pw = 0
        for k in range(d):
            pw += (x[i][k]-x[j][k])**2
        if pw**0.5%1==0: ans+=1
print(ans)
