import queue
n, k = map(int, input().split())
a = list(sorted(map(int, input().split()), reverse=True))
f = list(sorted(map(int, input().split())))

q = queue.PriorityQueue()
for i in range(n):
    q.put([-a[i]*f[i], a[i]])

while k:
    mxst = q.get()
    mxnd = q.get()
    print(mxst, mxnd)

    t = (mxnd[0]-mxst[0])//mxst[1]
    t = max(1, t)
    mxst[0] += t*mxst[1]
    k -= t
    q.put(mxst)
    q.put(mxnd)
    print(k, t)

ans = 0
for i in range(n):
    tmp = q.get()
    print(tmp)
    ans = max(ans, -tmp[0])
print(ans)