
import strutils, sequtils, future, algorithm
var n, k: int
(n, k) = stdin.readline.split.map(parseInt)
var h = lc[stdin.readline.parseInt | (i<-1..n), int].sorted(cmp)
echo lc[h[i+k-1]-h[i] | (i<-0..n-k), int].min
