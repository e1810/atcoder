
import strutils, sequtils
proc fun(s:string):char=char(int(s[0])-32)
var a=stdin.readline.split.map(fun)
echo a[0]&a[1]&a[2]
