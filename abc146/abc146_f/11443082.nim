
import strutils, sequtils
var n, m: int
(n, m) = stdin.readline.split.map(parseInt)
var
  s = stdin.readline
  ans = newSeq[int](0)
  cant = false
while n>0:
  for i in countdown(m, 0):
    if n<i: continue
    if i==0:
      cant = true
      break
    if s[n-i]=='0':
      ans.add(i)
      n -= i
      break
  if cant: break

if cant: echo -1
else:
  for i in 1..ans.len: stdout.write ans[ans.len-i]," "
  echo ""
