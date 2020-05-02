
n, a, b, *x = map(int, open(0).read().split())
ans = 0
t = x.pop(0)
for i in x:
    if a*(i-t)>b: ans += b
    else: ans += a*(i-t)
    t = i
print(ans)
