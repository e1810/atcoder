import strutils, sequtils, math

var
    n = stdin.readLine.parseInt
    l = stdin.readLine.split.map(parseInt)
echo if l.max*2<l.sum: "Yes" else: "No"