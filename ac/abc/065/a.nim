import strutils, sequtils;var a=stdin.readline.split.map(parseInt)
echo if a[2]-a[1]<=0:"delicious"elif a[2]-a[1]<=a[0]:"safe"else:"dangerous"
