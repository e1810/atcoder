
n, t, *a = map(int, open(0).read().split())
ans = 0
now = a[0]
for i in range(1,n):
        if now+t>=a[i]: ans += a[i]-now
        else: ans += t
        now = a[i]
print(ans+t)
