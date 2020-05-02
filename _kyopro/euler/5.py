def gcd(a, b):
    while b: a,b=b,a%b
    return a

def lcm(a, b):
    return a*b//gcd(a, b)

g = 2520
for i in range(11, 21): g = lcm(i, g)
print(g)
