
import strutils, sequtils
var a, b: int
(a, b) = stdin.readline.split.map(parseInt)

if a<b:
  for i in 0..<b: stdout.write a
else:
  for i in 0..<a: stdout.write b
