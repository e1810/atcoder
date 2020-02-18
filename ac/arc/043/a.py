n, a, b = map(int, input().split())

mx, mn, ave = 0, 1e18, 0
for i in range(n):
    tmp = int(input())
    mx = max(mx, tmp)
    mn = min(mn, tmp)
    ave += tmp
ave /= n

if mx==mn: print(-1)
else:
    p = b/(mx-mn)
    q = a-ave*p
    print(p, q)
