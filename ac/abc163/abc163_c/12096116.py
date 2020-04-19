
ans = [0] * int(input())
for i in map(int, input().split()): ans[i-1]+=1
print(*ans)
