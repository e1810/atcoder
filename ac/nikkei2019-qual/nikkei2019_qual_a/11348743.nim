
import strutils, sequtils
var n, a, b: int
(n, a, b) = stdin.readline.split.map(parseInt)
echo min(a, b), " ", max(0, a+b-n)
