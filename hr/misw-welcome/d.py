n = int(input())
a, b = [list(map(int, input().split())) for i in range(2)]
ans = 0
for i in range(n):
    if a[i]>b[i]: ans += 1
    elif a[i]*2<=b[i]: continue
    else: ans += (a[i]*2-b[i]) / (1+2*a[i])
print("%0.5lf" % ans)
