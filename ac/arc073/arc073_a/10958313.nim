
import strutils, sequtils
var
  a, t = stdin.readline.split.map(parseInt)
  n, T: int
(n,T) = a

var
  now = 0
  ans = T
for i in t:
  ans += min(i-now, T)
  now = i
echo ans
