n, x, y = map(int, input().split())
cnt = [0] * n
for i in range(1, n+1):
    for j in range(i+1, n+1):
        cnt[min(j-i, abs(x-i)+1+abs(y-j), abs(y-i)+1+abs(x-j))] += 1

for i in range(1,n):
    print(cnt[i])
