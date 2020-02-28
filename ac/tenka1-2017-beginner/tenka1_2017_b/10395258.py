
n = int(input())
ab = [list(map(int, input().split())) for i in range(n)]
ab.sort()
print(sum(ab[-1]))
