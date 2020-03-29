import strutils, sequtils, future
var n, m: int
(n, m) = stdin.readline.split.map(parseInt)

var cnt = lc[0|(x<-0..<n),int]
for i in 0..<m:
  var x = stdin.readline.split.map(parseInt)
  cnt[x[0]-1] += 1
  cnt[x[1]-1] += 1

var cant = 0
for i in 0..<n:
  if cnt[i]%%2==1: cant = 1
echo if cant==0:"YES"else:"NO"
  
