def gcd(a, b):
    if a==0 or b==0: return max(a, b)
    if a<b: a, b = b, a
    while b: a, b = b, a%b
    return a

n, *a = map(int, open(0).read().split())

l, r = [0]*(n+2), [0]*(n+2)
for i in range(n): l[i+1] = gcd(l[i], a[i])
for i in range(n+1, 1, -1): r[i-1] = gcd(r[i], a[i-2])

ans = 1
for i in range(n):
    ans = max(ans, gcd(l[i], r[i+2]))
print(ans)


