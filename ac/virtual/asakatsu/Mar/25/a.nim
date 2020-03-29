import strutils, sequtils, algorithm, math
var
  n, a = stdin.readline.split.map(parseInt).sorted(cmp)
  ans = 0
for i in n[1]-n[0]..<n[1]: ans += a[i]
echo ans

