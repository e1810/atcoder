import strutils, sequtils, future, math
var x = stdin.readline.parseInt
var f = lc[x | (x<-0..100010), int]
for i in 0..100010: f[i] = 1
f[0] = 0
f[1] = 0

for i in 2..100000:
  if f[i]==1:
    for j in countup(i+i, 100010, i): f[j] = 0

for i in x..100009:
  if f[i]==1:
    echo(i)
    break
  
