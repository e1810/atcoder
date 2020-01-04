
import strutils
var
  n = stdin.readline.parseInt
  ans = 0
for i in 0..n:
  if int(float(i)*1.08)==n: ans=i
echo if ans==0:":("else: $ans
