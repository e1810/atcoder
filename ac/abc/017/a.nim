import strutils,sequtils
var s=0.0
for i in 0..2:
  var a=stdin.readline.split.map(parseInt)
  s+=a[0]*a[1]/10
echo s.int
