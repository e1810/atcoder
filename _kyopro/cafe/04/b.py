def gcd(a, b):
    if a<b: a, b = b, a
    while b: a, b = b, a%b
    return a

a, A = map(int, input().split())
p = input()
b, B = map(int, input().split())

if p=="+":
    n = a*B + b*A
    d = A*B
    g = gcd(n, d)

    n //= g
    d //= g
    if d==1: print(n)
    else: print(n, d)
elif p=="-":
    n = a*B - b*A
    d = A*B
    g = gcd(n*(-1)**(n<0), d)
    
    n //= g
    d //= g
    if d==1: print(n)
    else: print(n, d)
elif p=="*":
    n = a*b
    d = A*B
    g = gcd(n, d)

    n //= g
    d //= g
    if d==1: print(n)
    else: print(n, d)
else:
    n = a*B
    d = A*b
    g = gcd(n, d)

    n //= g
    d //= g
    if d==1: print(n)
    else: print(n, d)

