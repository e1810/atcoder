import strutils, sequtils

proc digisum(a: int):int =
  var
    ret = 0
    x = a
  for i in 0..4:
    ret += x%%10
    x = x div 10
  return ret

var n, a, b: int
(n, a, b) = stdin.readline.split.map(parseInt)
var ans = 0
for i in 1..n:
  var c = digisum(i)
  if a<=c and c<=b: ans += i
echo ans
  
