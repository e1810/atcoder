h, w = map(int, input().split())

ss = [input() for i in range(h)]
mp = [[]for i in range(h)]
for i in range(h):
    s = ss[i]
    prev = s[0]
    cnt = 0
    for j in range(w):
        if s[j]==prev: cnt+=1
        else:
            mp[i] += [cnt*(s[j]=="#")]*cnt
            cnt = 1
        prev = s[j]
    mp[i] += [cnt*(s[j]==".")]*cnt

ss = ["".join(i) for i in zip(*ss)]
pm = [[] for i in range(w)]
for i in range(w):
    s = ss[i]
    prev = s[0]
    cnt = 0
    for j in range(h):
        if s[j]==prev: cnt+=1
        else:
            pm[i] += [cnt*(s[j]=="#")]*cnt
            cnt = 1
        prev = s[j]
    pm[i] += [cnt*(s[j]==".")]*cnt

ans = 0
for i in range(h):
    for j in range(w):
        ans = max(ans, mp[i][j]+pm[j][i]-1)
print(ans)
