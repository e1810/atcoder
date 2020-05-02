
from math import pi
n, *a = map(int,open(0).read().split())
a.sort()
ans = r = 0
for i in range(n):
        ans += a[i]*a[i] * (-1)**(i%2)
print(abs(ans)*pi)
