
import strutils, sequtils
var
  n, y: int
  ans = [-1, -1, -1]
(n, y) = stdin.readline.split.map(parseInt)

for i in 0..n:
  for j in 0..n:
    if i+j>n: continue
    if i*10000 + j*5000 + (n-i-j)*1000 == y:
      ans = [i, j, (n-i-j)]
echo ans.mapIt($it).join" "
