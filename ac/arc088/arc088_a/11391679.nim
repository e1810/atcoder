
import strutils, sequtils
var x, y: int64
(x, y) = stdin.readline.split.map(parseInt)
var ans = 0
while x<=y:
  x *= 2
  ans += 1
echo ans
