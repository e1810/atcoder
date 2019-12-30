
import strutils, sequtils
var
  n = stdin.readline.parseInt
  sm = 0
for i in 1..n: sm += i
echo sm*10000/n
