
import strutils, sequtils
var
  n = stdin.readline.split.map(parseInt)
  t = newSeqWith(n[0], stdin.readline.split.map(parseInt))

proc dfs(i, s: int): bool =
  if i>=0:
    var ret = false
    for x in t[i]: ret = ret or dfs(i-1, s xor x)
    return ret
  else: return s==0

echo if dfs(n[0]-1, 0):"Found" else:"Nothing"
