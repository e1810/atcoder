import strutils, sequtils, math, algorithm

var
  n = stdin.readline.parseInt
  a = sorted(stdin.readline.split.map(parseInt), cmp)
  x = 0
  y = 0
for i in 0..<n:
  if i%%2==1: x += a[i]
  else: y += a[i]
echo abs(x-y)
