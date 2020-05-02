
import strutils

var
    n = stdin.readLine.parseInt
    ans = 1
for i in 1..n: ans = ans * i %% 1000000007
echo ans
