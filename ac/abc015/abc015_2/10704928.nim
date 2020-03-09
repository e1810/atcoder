
import strutils, sequtils, math
var n,a=stdin.readline.split.map(parseInt)
for i in a:n[0]-=int(i==0)
echo((a.sum+n[0]-1)div n[0])
