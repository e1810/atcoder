import strutils
var
  n = stdin.readline.parseInt
  i = 2
  a = 1
while i*i<=n:
  if n%%i==0: a = i
  i += 1
echo a + n div a - 2
