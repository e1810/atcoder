import strutils, sequtils
var a=stdin.readline.split.map(parseInt)
echo if a[0]%%a[1]==0:0 else:1
