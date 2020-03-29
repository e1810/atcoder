import strutils, sequtils

proc gcd(x, y: int): int = 
  var a, b: int
  (a, b) = (x, y)
  if a<b: (a, b) = (b, a)
  if b==0: return a
  while b>0: (a, b) = (b, a%%b)
  return a

var
  x, a = stdin.readline.split.map(parseInt)
  n = x[0]
  l, r = newSeqWith(n+2, 0)

for i in 1..n:
  l[i] = gcd(l[i-1], a[i-1])
  r[n-i+1] = gcd(r[n-i+2], a[n-i])

var ans = 1
for i in 1..n: ans = max(ans, gcd(l[i-1], r[i+1]))
echo ans
  
