import strutils, sequtils, math
var
  n = stdin.readline.parseInt
  a = stdin.readline.split.map(parseFloat)
let x = a.sum / float(n)
var mindx = n-1
for i in countdown(n-1, 0):
  if abs(x-a[mindx])>=abs(x-a[i]): mindx = i
echo mindx
