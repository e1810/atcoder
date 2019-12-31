
import strutils, sequtils
var a=stdin.readline.split.map(parseInt)
echo if a[0]+a[1]<a[2]:"No"else:"Yes"
