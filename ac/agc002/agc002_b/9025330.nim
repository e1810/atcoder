
import strutils, sequtils
var n, m: int; (n,m)=readline(stdin).split.map(parseInt)
var a = newseq[int](n)
var ans = newseq[int](n)
for i in 0..n-1: a[i]=1
for i in 0..n-1: ans[i]=0
ans[0] = 1

for i in 1..m:
  var x, y: int
  (x,y)=readline(stdin).split.map(parseInt)
  if ans[x-1]==1: ans[y-1]=1
  if a[x-1]==1: ans[x-1]=0
  a[x-1] -= 1
  a[y-1] += 1

var sm = 0
for i in ans: sm += i
echo sm
