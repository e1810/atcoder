n = int(input())
ans = 1
for i in sorted(map(int, input().split())):
    ans *= i
    if ans>1e18:
        print(-1)
        exit()
print(ans)
