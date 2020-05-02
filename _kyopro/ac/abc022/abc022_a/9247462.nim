
import strutils, sequtils
var n,s,t:int
(n,s,t)=stdin.readline.split.map(parseInt)
var a,m=0
for i in 1..n:
  m+=stdin.readline.parseInt
  if s<=m and m<=t:a+=1
echo a
