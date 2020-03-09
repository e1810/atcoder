
import strutils, algorithm
var b = newSeq[int]()
for i in 1..stdin.readline.parseInt:
  var a = stdin.readLine.parseInt
  if not(a in b): b.add(a)
echo b.sorted(cmp)[b.len-2]
