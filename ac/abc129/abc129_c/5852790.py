
def fibon(n):
    a, b = 0, 1
    while n>=0:
        if n==0:return a
        b += a
        n -= 1
        if n==0: return b
        a += b
        n -= 1

n, m = map(int, input().split())
a = [-1] + [int(input()) for i in range(m)] + [n+1]
ans = 1
for i in range(m+1):
    ans *= fibon(a[i+1]-a[i]-1)
print(ans%1000000007)
