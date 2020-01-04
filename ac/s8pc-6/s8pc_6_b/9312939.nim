
import strutils, sequtils, future, algorithm, math
var
  n = stdin.readline.parseInt
  a, b = lc[0|(i<-1..n),int]
for i in 0..<n:
  var ab = stdin.readline.split.map(parseInt)
  a[i] = ab[0]
  b[i] = ab[1]
var
  meda = a.sorted(cmp)[n div 2]
  medb = b.sorted(cmp)[n div 2]
  ans = 0
for i in 0..<n:
  if a[i]<meda:
    if b[i]<medb: ans += meda-a[i]+medb-a[i]
    else: ans += b[i]-a[i]+meda-a[i]+b[i]-medb
  else:
    if b[i]<medb: ans += medb-meda
    else:ans += b[i]-meda+b[i]-medb
echo ans
