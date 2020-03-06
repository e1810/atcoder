import strutils
var
    n = stdin.readLine.parseInt
    vv = 0
if n<100: vv = 0
elif n<=5000: vv = n div 100
elif n<=30000: vv = n div 1000 + 50
elif n<=70000: vv = n div 5000 + 74
else: vv = 89
echo if vv>9: $vv else: "0"& $vv