
import strutils, sequtils
var a,b,c:int;(a,b,c)=stdin.readline.split.map(parseInt)
echo if a==b and b==c:1 elif a==b or b==c or a==c:2 else:3
