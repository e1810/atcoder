
import strutils
var
  s=stdin.readline
  n=stdin.readline.parseInt
  c=1
  ans:string
for i in 0..4:
  for j in 0..4:
    if c==n: ans=s[i]&s[j]
    c+=1
echo ans
