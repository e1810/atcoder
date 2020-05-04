n, k, *v = map(int, open(0).read().split())

ans = 0
for i in range(n+1):
    for j in range(n+1):
        if i+j>k: continue
        cand = sorted([v[I] for I in range(n) if I<i or n-j<=I])
        cnt = sum(cand)
        ans = max(ans, cnt)
        for l in range(min(k-i-j, len(cand))):
            cnt -= cand[l]
            ans = max(ans, cnt)
print(ans)
