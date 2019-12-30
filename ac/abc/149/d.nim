import strutils, sequtils, future, math
var
  n, k, ro, sc, pa: int
  t: string
(n, k) = stdin.readline.split.map(parseInt)
(ro, sc, pa) = stdin.readline.split.map(parseInt)
t = stdin.readline

var ss = lc["" | (x<-0..<k), string]
for i in 0..<n: ss[i mod k] = ss[i mod k] & t[i]

var ans = 0
for s in ss:
  var
    prev=s[0]
    cnt=0

  for c in s:
    if prev==c:
      cnt += 1
    else:
      var tmp = (cnt+1) div 2
      case prev
        of 'r': ans += tmp * pa
        of 's': ans += tmp * ro
        of 'p': ans += tmp * sc
        else: discard
      cnt = 1
    prev = c

  var tmp = (cnt+1) div 2
  case prev
    of 'r': ans += tmp * pa
    of 's': ans += tmp * ro
    of 'p': ans += tmp * sc
    else: discard
echo ans
