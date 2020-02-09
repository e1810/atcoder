
import strutils, sequtils
var
  n = stdin.readline.parseInt
  b = stdin.readline.split.map(parseInt)
  ans = b[0]
for i in 0..<n-2: ans += min(b[i], b[i+1])
ans += b[n-2]
echo ans
