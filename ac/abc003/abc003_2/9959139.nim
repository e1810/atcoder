
import sets
var
  s, t = stdin.readline
  a = "atcoder@".toSet
  flag = true
for i in 0..<s.len:
  if s[i]=='@' or t[i]=='@':
    if not(s[i] in a) or not(t[i] in a):
      flag = false
  elif s[i]!=t[i]:
    flag = false
echo if flag: "You can win" else: "You will lose"
