
import future
var
    s = stdin.readLine
    a = newSeq[int]()
    prev = 'R'
    cnt = 0
for i in s:
    if prev==i: cnt+=1
    else:
        a.add(cnt)
        cnt = 1
    prev = i
a.add(cnt)

var
    ans = newSeq[int](s.len)
    idx = 0
    inr = true

for i in a:
    if inr:
        ans[idx+i-1] = (i+1) div 2
        ans[idx+i] = i div 2
        inr = false
    else:
        ans[idx-1] += i div 2
        ans[idx] += (i+1) div 2
        inr = true
    idx += i

for i in ans: echo i
