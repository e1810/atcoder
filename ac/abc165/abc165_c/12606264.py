n, m, q = map(int, input().split())
a, b, c, d = [[0]*q for i in range(4)]
for i in range(q):
    a[i], b[i], c[i], d[i] = map(int, input().split())
    a[i] -= 1
    b[i] -= 1

def dfs(vec, mx, cnt):
    if cnt:
        tmp = 0
        for i in range(mx, m+1):
           tmp = max(tmp, dfs(vec+[i], i, cnt-1))
        return tmp
    else:
        tmp = 0
        for i in range(q):
            if vec[b[i]]-vec[a[i]]==c[i]: tmp += d[i]
        return tmp
print(dfs([], 1, n))
