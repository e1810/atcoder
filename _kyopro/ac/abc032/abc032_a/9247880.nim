
import strutils,future
var a,b,n:int
(a,b,n)=lc[stdin.readline.parseInt|(x<-0..2),int]
for i in n..1000000:
  if (i mod a==0)and(i mod b==0):
    echo i
    break
