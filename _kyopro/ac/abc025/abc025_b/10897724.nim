
import strutils, sequtils
var n, a, b:int
(n,a,b) = stdin.readline.split.map(parseInt)

var ans = 0
for i in 0..<n:
  var
    x = stdin.readline.split
    s = x[0]
    t = x[1].parseInt
  if s=="East": ans += max(a, min(b, t))
  else: ans -= max(a, min(b, t))

if ans<0: echo "West " & $(-ans)
elif ans>0: echo "East " & $ans
else: echo 0
