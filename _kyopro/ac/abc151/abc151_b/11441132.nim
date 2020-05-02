
import strutils, sequtils, math
var n, k, m: int
(n, k, m) = stdin.readline.split.map(parseInt)
var a = m*n-stdin.readline.split.map(parseInt).sum
if a<=0: echo 0
else: echo if a<=k: a else: -1
