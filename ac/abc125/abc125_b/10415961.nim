
import strutils, sequtils, future, math
var
     n = stdin.readLine.parseInt
     v, c = stdin.readLine.split.map(parseInt)
     a = lc[v[i]-c[i] | (i<-0..<n, v[i]-c[i]>0), int]
echo a.sum
