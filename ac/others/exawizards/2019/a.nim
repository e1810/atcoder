import strutils, sequtils, math
var a = stdin.readline.split.map(parseInt)
echo if a[0]==a[1] and a[1]==a[2]: "Yes" else: "No"
