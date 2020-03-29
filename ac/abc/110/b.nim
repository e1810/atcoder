import strutils,sequtils, algorithm
var a, x, y = stdin.readline.split.map(parseInt)
echo if max(a[2],x.sorted[^1])<min(a[3],y.sorted[0]): "No war" else: "War"
