
import strutils, sequtils
var n, u, v, a, b: int
(n, u, v) = stdin.readline.split.map(parseInt)
u -= 1
v -= 1

var links = newSeqWith(n, newSeq[int](0))
for i in 0..n-2:
  (a, b) = stdin.readline.split.map(parseInt)
  links[a-1].add(b-1)
  links[b-1].add(a-1)

proc dfs(dist: var seq[int], st, d: int, used: var seq[int]): void =
  if used[st]>0: return
  used[st] = 1
  dist[st] = d
  for to in links[st]:
    if used[to]==0: dfs(dist, to, d+1, used)
  return

var udist, vdist, used = newSeqWith(n, 0)
dfs(udist, u, 0, used)
used = newSeqWith(n, 0)
dfs(vdist, v, 0, used)

var ans = 0
for i in 0..<n:
  if udist[i]<vdist[i]: ans = max(ans, vdist[i]-1)
echo ans
