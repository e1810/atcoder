n = int(input())
mn = 1e10

for i in range(n+1):
    ans = 0
    a, b = i, n-i

    while a>=6:
        a, mo = divmod(a, 6)
        ans += mo
    ans += a

    while b>=9:
        b, mo = divmod(b, 9)
        ans += mo
    ans += b

    mn = min(mn, ans)
print(mn)

