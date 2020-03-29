import strutils, sequtils
var
  n, a, b = stdin.readline.split.map(parseInt)
  ans = 0
for i in 0..<n[0]:
  var tmp = 0
  for j in 0..<n[0]:
    if j<=i: tmp += a[j]
    if j>=i: tmp += b[j]
  ans = max(ans, tmp)
echo ans
