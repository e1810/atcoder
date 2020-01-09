import strutils
var
  s=stdin.readline.parseInt
  m=1000000000
if s%%m!=0:echo "0 0 1000000000 1 ",m-s%%m," ",s div m+1
else:echo "0 0 1000000000 1 0 ",s div m
