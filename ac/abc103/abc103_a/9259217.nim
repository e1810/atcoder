
import strutils, sequtils, math
var
  a=stdin.readline.split.map(parseInt)
  b=[abs(a[0]-a[1]),abs(a[1]-a[2]),abs(a[2]-a[0])]
echo b.sum-b.max
