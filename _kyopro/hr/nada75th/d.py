def gcd(a, b):
    if a<b: a,b=b,a
    if b==0: return a
    while b: a,b=b,a%b
    return a

def rec(a, b, n, x):
    if n==0: return x
    cnt = 1
    for i in range(a, b+1):
        cnt *= rec(a, b, n-1, gcd(i, x))
        cnt %= 1000000007
    return cnt

print(rec(*(list(map(int,input().split()))+[0])))



