
def gcd(a,b):
    if a>b: a,b=b,a
    while b:
        a, b = b, a%b
    return a

def lcm(a,b):
    if a==0: return b
    return a*b//gcd(a,b)

n = int(input())
a = list(map(int, input().split()))
g = 0
for i in range(n): g=lcm(g, a[i])

sm = 0
for i in a: sm += g//i
print(sm%1000000007)
