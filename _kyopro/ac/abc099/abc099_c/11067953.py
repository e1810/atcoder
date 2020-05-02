
def rec(n, x):
        d, m = divmod(n, x)
        if d: return m + rec(d, x)
        else: return m

ans = n = int(input())
for i in range(n+1):
        ans = min(ans, rec(i, 6)+rec(n-i, 9))
print(ans)
