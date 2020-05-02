
import strutils, sequtils
var ans = stdin.readline.parseInt*0
for i in stdin.readline.split.mapIt(it.parseInt%%6):
    if i==0: ans += 3
    elif i<3: ans += i-1
    else: ans += i-3
echo ans
