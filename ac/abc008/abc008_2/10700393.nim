
import strutils, tables, future
var
    m = initTable[string,int]()
    mx = 0
    ans = ""
for c in lc[stdin.readline|(x<-1..stdin.readline.parseInt),string]:
    if c in m: m[c] += 1
    else: m[c] = 0
for k,v in m:
    if mx<=v:
        mx = v
        ans = k
echo ans
