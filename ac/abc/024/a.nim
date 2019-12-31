import strutils, sequtils
var a,b,c,k,s,t:int
(a,b,c,k)=stdin.readline.split.map(parseInt)
(s,t)=stdin.readline.split.map(parseInt)
var n=a*s+b*t
if s+t>=k:n-=c*(s+t)
echo n
