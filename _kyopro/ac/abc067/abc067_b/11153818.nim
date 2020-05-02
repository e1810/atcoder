
import strutils, sequtils, algorithm, future, math
var n, a = stdin.readline.split.map(parseInt).sorted(cmp)
echo lc[a[^i]|(i<-1..n[0]),int].sum
