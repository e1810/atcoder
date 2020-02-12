n, k, *a = map(int, open(0).read().split())

mx, mn = 0, 1e18
ans = tmp = 0
got = 1
for i in range(n):
    mx = max(mx, a[i])
    if(mn>a[i]): mn = mx = a[i]
    if got==mx-mn:
        tmp += 1
    elif got<mx-mn:
        got = mx-mn
        tmp = 1
    ans = max(ans, tmp)
print(ans)

