
var
  cnt = 0
  prev = '-'
  ans = ""
for i in stdin.readline:
  if prev==i: cnt += 1
  elif cnt!=0:
    ans &= prev & $cnt
    cnt = 1
  else: cnt = 1
  prev = i
if cnt!=0:
  ans &= prev & $cnt
echo ans
