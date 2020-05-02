
n, k = map(int, input().split())
a = list(sorted(map(int, input().split())))
print(sum(a[:max(0,n-k)]))
