import strutils, sequtils, math, system, macros, algorithm, tables, sets, lists, queues, intsets, critbits, future
var ans = 0
for i in readline(stdin).split.map(parseInt): ans+=i
echo(if ans>21: "bust" else: "win")
