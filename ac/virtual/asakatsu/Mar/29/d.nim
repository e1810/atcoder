import strutils, sequtils, future, math
var a = lc[stdin.readline.parseInt | (x<-1..stdin.readline.parseInt), int]
echo a.sum, "\n",  max(0, 2*a.max-a.sum)

