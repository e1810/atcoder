
import strutils, sequtils, algorithm

proc cmp(a, b: float): bool = a<b

var n, k: int
(n, k) = stdin.readline.split.map(parseInt)
var
  a = stdin.readline.split.map(parseFloat).sorted(cmp)
  ans = 0.0
for i in n-k..<n:
  ans = (ans+a[i])/2
echo ans
