import strutils,sequtils
var
  a=stdin.readline.split.map(parseInt)
  x=a[1]/a[0]
  y=a[3]/a[2]
echo if x>y:"TAKAHASHI"elif x<y:"AOKI"else:"DRAW"
