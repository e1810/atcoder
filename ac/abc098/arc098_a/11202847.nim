
import strutils, sequtils
var
  x, s = stdin.readline
  n = x.parseInt

var E, W = newSeqWith(n+1, 0)
for i in 0..<n:
  E[i+1] = E[i] + int(s[n-i-1]=='E')
  W[i+1] = W[i] + int(s[i]=='W')

var ans = n;
for i in 0..n:
  ans = min(ans, W[i]+E[n-i])
echo ans
