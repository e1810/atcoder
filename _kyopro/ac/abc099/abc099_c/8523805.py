
n = int(input())
mn = 1e10

for i in range(n+1):
    ans = 0
    a, b = i, n-i

    di, mo = divmod(a, 6)
    ans += mo
    while di>=6:
        di, mo = divmod(di, 6)
        ans += mo
    ans += di

    di, mo = divmod(b, 9)
    ans += mo
    while di>=9:
        di, mo = divmod(di, 9)
        ans += mo
    ans += di

    mn = min(mn, ans)
print(mn)
