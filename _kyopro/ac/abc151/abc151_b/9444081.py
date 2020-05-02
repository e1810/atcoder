
n, k, m = map(int, input().split())
a = sum(list(map(int, input().split())))
ans = n*m-a
if ans>k: print(-1)
else:print(max(0, ans))
