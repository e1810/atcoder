
import strutils,sequtils,algorithm
var a=stdin.readline.split.map(parseInt);sort(a,cmp)
echo if a[0]+a[1]==a[2]:"Yes"else:"No"
