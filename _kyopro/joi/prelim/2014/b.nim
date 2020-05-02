import strutils, sequtils, future
var n, m: int
(n, m) = stdin.readline.split.map(parseInt)
var a = lc[stdin.readline.parseInt | (i<-0..<n), int]
var b = lc[stdin.readline.parseInt | (i<-0..<m), int]

var vtd = lc[0 | (i<-0..<n), int]
for base in b:
  var vote = n-1
  for i in countdown(n-1, 0):
    if a[i]<=base: vote = i
  vtd[vote] += 1

var
  mx = 0
  mxi = 0
for i in 0..<n:
  if mx<vtd[i]:
    mx = vtd[i]
    mxi = i
echo mxi+1

