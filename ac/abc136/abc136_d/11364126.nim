
import strutils, sequtils
var
  s = stdin.readline & 'R'
  p, cnt = 0
  prev = 'R'
  ans = newSeqWith(s.len-1, 0)

for i in 0..<s.len:
  if prev==s[i]: cnt += 1
  else:
    if prev=='R':
      p = i-1
      ans[p] += (cnt+1) div 2
      ans[p+1] += cnt div 2
    else:
      ans[p] += cnt div 2
      ans[p+1] += (cnt+1) div 2
    cnt = 1
  prev = s[i]

echo ans.mapIt($it).join(" ")
