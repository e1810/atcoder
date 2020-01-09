import strutils, sequtils
var
  n=stdin.readline.parseInt
  a = stdin.readline.split.map(parseInt)
  ans = 0
for x in 1..a.max:
  var cnt = 0
  for i in a:
    if x>i:
      ans += cnt
      cnt = 0
    else:
      cnt = 1
  ans += cnt
echo ans
