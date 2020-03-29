import strutils, sequtils
var
  a, p = stdin.readline.split.map(parseFloat)
  n, k: int
(n, k) = a.map(toInt)

p = @[0.0] & p
for i in 1..n:
  p[i] *= (p[i]+1) / (2*p[i])
  p[i] += p[i-1]

var ans = 0.0
for i in 0..n-k: ans = max(ans, p[i+k]-p[i])
echo ans
