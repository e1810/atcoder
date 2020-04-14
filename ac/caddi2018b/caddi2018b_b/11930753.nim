
import strutils, sequtils
var n, h, w, a, b: int
(n, h, w) = stdin.readline.split.map(parseInt)
var ans = 0
for i in 0..<n:
  (a, b) = stdin.readline.split.map(parseInt)
  if a>=h and b>=w: ans += 1
echo ans
