
import strutils, math
var
  n=stdin.readline.parseInt
  a=[0,0,0,0]
for i in 0..3:
  if n mod 2==1: a[i]=1
  n = n div 2
echo sum(a)
for i in 0..3:
  if a[i]==1:echo 2^i
