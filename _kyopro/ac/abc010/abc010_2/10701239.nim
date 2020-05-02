
import strutils, sequtils
var
  n, a = stdin.readline.split.map(parseInt)
  ans = 0
for i in 0..<n[0]:
  while not(a[i]%%6 in[1,3]):
      ans += 1
      a[i] -= 1
echo ans
