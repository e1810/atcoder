import strutils, sequtils
var a=stdin.readline.split.map(parseInt)
echo if a[0]>8 or a[1]>8:":("else:"Yay!"
