import strutils, future, math
var a = lc[stdin.readline.parseInt | (x<-0..4), int]

var mx = 0
for i in 0..4:
    if a[i]%%10!=0: mx = max(mx, 10-a[i]%%10)
    a[i] = (a[i]+9) div 10 * 10

echo a.sum - mx
