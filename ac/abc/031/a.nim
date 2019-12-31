import strutils,sequtils
var a,b:int
(a,b)=stdin.readline.split.map(parseInt)
if a<b:(a,b)=(b,a)
echo a*(b+1)
