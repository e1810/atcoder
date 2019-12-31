import strutils, sequtils
var a=stdin.readline.split.map(parseInt)
echo if a[1]-a[0]==a[2]-a[1]:"YES"else:"NO"
