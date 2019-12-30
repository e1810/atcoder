import strutils, sequtils
var a, b, k: int
(a, b, k) = stdin.readline.split.map(parseInt)
echo(max(0, a-k), " ", min(b, max(0, b+a-k)))
