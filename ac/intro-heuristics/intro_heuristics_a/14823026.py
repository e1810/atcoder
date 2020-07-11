d = int(input())
c, *s = [list(map(int, input().split())) for i in range(d+1)]
t = [0] * d


cand = [[0, [], [-1]*26]]
while 1:
    for I in range(len(cand)):
        scr, tt, lst = cand[0]
        del cand[0]
        for j in range(26):
            score = scr
            for col in range(26):
                if col==j:
                    score += s[len(tt)][j]
                    lst[j] = len(tt)
                score -= c[col] * (len(tt) - lst[col])
            cand.append([score, tt+[j], lst])
    cand.sort(key=lambda x:-x[0])
    if len(cand[0][1])==d: break
    cand = cand[:5]

for i in cand[0][1]:
    print(i+1)
