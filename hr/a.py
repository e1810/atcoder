n = int(input())
ab = [list(map(int, input().split())) for i in range(n)]

ans1 = ans2 = 0
for i in range(1, n):
    if ab[0][0]<ab[i][0]: ans1 += 1
    if ab[0][1]<ab[i][1]: ans2 += 1
print(min(ans1, ans2))
