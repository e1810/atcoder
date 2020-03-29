import strutils, sequtils
var
  n, a = stdin.readline.split.map(parseInt)
  prev = a[0]
  cnt = 0
  ans = 0
for i in 0..<n[0]:
  if prev==a[i]: cnt += 1
  else:
    ans += cnt div 2
    cnt = 1
  prev = a[i]
echo ans + cnt div 2
