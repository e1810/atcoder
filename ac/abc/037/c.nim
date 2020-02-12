import strutils, sequtils
var
  x, a= stdin.readline.split.map(parseInt)
  (n, k) = (x[0], x[1])
for i in 1..<n: a[i] += a[i-1]

var sm = a[k-1]
for i in 0..n-k-1: sm += a[i+k] - a[i]
echo sm

  
