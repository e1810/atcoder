import strutils, sequtils
let MOD: int = 1000000007;

var n = stdin.readline.parseInt()
var a = stdin.readline().split().map(parseInt)

var mx = a.max()
var f = newSeq[int](mx+1)
f[0] = 1

for i in 1..mx:
  f[i] = f[i-1] * i mod MOD

var ans = 1
for i in a:
  ans = ans * f[i] mod MOD
echo ans
