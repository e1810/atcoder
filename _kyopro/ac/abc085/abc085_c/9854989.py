
n, y = map(int, input().split())
ans = [-1]*3
for i in range(n+1):
    for j in range(i, n+1):
        if i*10 + (j-i)*5 + (n-j) == y//1000:
            ans = [i, j-i, n-j]
print(*ans)
