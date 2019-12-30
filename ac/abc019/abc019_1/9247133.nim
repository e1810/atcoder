
import strutils,sequtils,algorithm
var a=stdin.readline.split.map(parseInt)
echo a.sorted(cmp)[1]
