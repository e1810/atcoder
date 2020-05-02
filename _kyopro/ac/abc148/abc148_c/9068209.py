
a, b = map(int, input().split())
if a<b: a,b=b,a
c = a*b
while b: a, b = b, a%b
print(c//a)
