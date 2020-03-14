import strutils, sequtils, future, algorithm
var
  a = stdin.readline.split.map(parseInt)
  b = lc[a[x]+a[y]+a[z]|(x<-0..4,y<-x+1..4,z<-y+1..4),int].deduplicate.sorted(cmp)
echo b[b.len-3]
