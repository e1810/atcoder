import strutils, sequtils
var x=stdin.readline.split.map(parseInt)
echo max(0,x[0]-x[1])
