import strutils,future
var n=lc[stdin.readline.parseInt|(x<-0..2),int]
for i in 0..2:echo(if n[i]==max(n):1 elif n[i]==min(n):3 else:2)
