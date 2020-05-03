n, m = map(int, input().split())
h = list(map(int, input().split()))
links = [[] for i in range(n)]
for i in range(m):
    a, b = map(int, input().split())
    links[a-1].append(b-1)
    links[b-1].append(a-1)

ans = 0
used = [0] * n
for i in range(n):
    if used[i]: continue
    used[i] = 1
    ok = True
    for to in links[i]:
        if h[to]>=h[i]: ok = False
        else: used[to] = 1
    if ok: ans += 1
print(ans)
