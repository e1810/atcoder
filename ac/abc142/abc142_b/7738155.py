
n, k = map(int, input().split())
ans = 0
for i in map(int, input().split()): ans+=(i>=k)
print(ans)
