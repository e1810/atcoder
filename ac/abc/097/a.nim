import strutils, sequtils, math;var a=stdin.readline.split.map(parseInt)
echo if(abs(a[1]-a[0])<=a[3]and abs(a[2]-a[1])<=a[3])or(abs(a[2]-a[0])<=a[3]):"Yes"else:"No"
