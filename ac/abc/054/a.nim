import strutils, sequtils
var a,b:int
(a,b)=stdin.readline.split.map(parseInt)
if a>b:echo if a==13 and b==1:"Bob"else:"Alice"
elif a<b:echo if a==1 and b==13:"Alice"else:"Bob"
else:echo"Draw"
