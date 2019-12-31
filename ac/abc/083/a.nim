import strutils,sequtils,math
var
  a=stdin.readline.split.map(parseInt)
  x=a[0..1].sum
  y=a[2..3].sum
echo if x<y:"Right"elif x>y:"Left"else:"Balanced"
