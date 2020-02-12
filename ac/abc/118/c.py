def gcd(a, b):
    if(a==0): return b
    if a<b: a,b=b,a
    while b: a,b=b,a%b
    return a

n, *a = map(int, open(0).read().split())
g = 0
for i in a: g = gcd(g, i)
print(g)
