
n = int(input())
a = list(map(int, input().split()))
ans = 0
cnt = 0
for i in range(n-1):
  if a[i] >= a[i+1]: cnt += 1
  else:
    ans = max(ans, cnt)
    cnt = 0
print(max(cnt, ans))
