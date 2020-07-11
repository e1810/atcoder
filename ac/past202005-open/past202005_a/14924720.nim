import strutils
var s, t = stdin.readLine
if s==t: echo "same"
elif s.tolower==t.tolower: echo "case-insensitive"
else: echo "different"
