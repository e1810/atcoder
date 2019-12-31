import strutils, sequtils
var n=stdin.readline.split.map(parseInt)
echo min(n[1]-1,n[0]-n[1])
