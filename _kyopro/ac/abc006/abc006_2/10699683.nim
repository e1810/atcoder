
import strutils
var trib = @[0,0,1]
for i in 3..1000000: trib.add((trib[i-3]+trib[i-2]+trib[i-1])%%10007)
echo trib[stdin.readline.parseInt-1]
