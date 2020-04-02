
import strutils
var
  n = stdin.readline.parseInt
  i = 1
  x = 1
while i*i<=n:
  if n%%i==0: x = i
  i += 1
echo x + n div x - 2
