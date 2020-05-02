
import strutils, sequtils, algorithm
var n, h: int
(n, h) = stdin.readline.split.map(parseInt)
var a, b = newSeq[int](n)
for i in 0..<n: (a[i], b[i]) = stdin.readline.split.map(parseInt)
b = b.sorted(cmp)

var
  mx = a.max
  ans = 0
for i in 1..n:
  if b[n-i]>mx:
    h -= b[n-i]
    ans += 1
    if h<=0:
      echo ans
      system.quit()
ans += (h+mx-1) div mx
echo ans
