
import strutils, sequtils
var n,s,t,sm,ans:int
(n,s,t)=stdin.readline.split.map(parseInt)
ans = 0;sm=0
for i in 1..n:
  sm+=stdin.readline.parseInt
  if s<=sm and sm<=t:ans+=1
echo ans
