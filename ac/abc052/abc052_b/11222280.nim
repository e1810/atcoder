
import strutils
var
  x, s = stdin.readline
  n = x.parseInt
  cnt = 0
  ans = 0

for i in 0..<n:
  if s[i]=='I':  cnt += 1
  else: cnt -= 1
  ans = max(ans, cnt)
echo ans
