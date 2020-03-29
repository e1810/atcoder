import strutils, sequtils
var
  n = stdin.readline.parseInt
  s = newSeqWith(3, stdin.readline)
  ans = 0
for i in 0..<n:
  ans += max(0, int(s[0][i]!=s[1][i])+int(s[1][i]!=s[2][i])+int(s[2][i]!=s[0][i])-1)
echo ans

