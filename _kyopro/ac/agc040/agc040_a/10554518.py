
s = input()
a = []
prev = cnt = 0
for i in s:
        if i==prev: cnt+=1
        else:
                if prev: a.append([prev,cnt])
                cnt = 1
        prev = i
a.append([prev, cnt])

ans = [0] * (len(s)+1)
idx = 0
for t, c in a:
        for j in range(c+1):
                if t=='<': ans[idx+j] = max(ans[idx+j], j)
                else: ans[idx+j] = max(ans[idx+j], c-j)
        idx += j
print(sum(ans))
