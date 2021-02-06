from math import floor, ceil
from decimal import Decimal

x, y, r = map(Decimal, input().split())

ans = 0
for i in range(ceil(x-r), floor(x+r)+1):
  y2 = r**2 - (Decimal(i)-x)**2
  if y2<0: continue
  tp = floor((y2.sqrt() + y))
  bt = ceil((-y2.sqrt() + y))
  ans += tp - bt + 1
print(ans)
