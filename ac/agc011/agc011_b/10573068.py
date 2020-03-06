
n, *a = map(int, open(0).read().split())
a = [0] + sorted(a) + [1e9+1]

l, r = 0, n+2
while r-l>1:
        mid = (l+r)//2
        m = a[mid]
        for i in range(n+1):
                if i==mid: continue
                if a[i]<=m*2: m += a[i]
                else: break
        else:
                r = mid
                continue
        l = mid
print(n-l)
