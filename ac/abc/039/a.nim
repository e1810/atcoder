import strutils, sequtils
var a,b,c:int;(a,b,c)=stdin.readline.split.map(parseInt)
echo 2*a*b+2*b*c+2*c*a
