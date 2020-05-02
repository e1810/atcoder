
n, k, *a = map(int, open(0).read().split())

mn = 1e18
ans, got = 1, 0
for i in range(n):
    if(mn>a[i]): mn = a[i]
    elif got==a[i]-mn: ans += 1
    elif got<a[i]-mn:
        got = a[i]-mn
        ans = 1
print(ans)
