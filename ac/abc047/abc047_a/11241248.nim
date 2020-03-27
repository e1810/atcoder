
import strutils, sequtils
var a, b, c: int
(a, b, c) = stdin.readline.split.map(parseInt)
echo if a+b==c or b+c==a or c+a==b: "Yes" else: "No"
