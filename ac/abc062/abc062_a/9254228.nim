
import strutils, sequtils
var
  a=stdin.readline.split.map(parseInt)
  b="_020101001010"
echo if b[a[0]]==b[a[1]]:"Yes"else:"No"
