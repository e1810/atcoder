
import strutils, sequtils
var
  n, p = stdin.readline.split.map(parseInt)
  ans = 0
for i in 0..n[0]-2:
  if p[i]==i+1:
    (p[i],p[i+1]) = (p[i+1],p[i])
    ans += 1
if p[n[0]-1]==n[0]: ans += 1
echo ans
