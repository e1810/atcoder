n, m = map(int, input().split())
value = [0]*100000
for i in range(n):
    a, b = map(int, input().split())
    value[a-1] = max(value[a-1], b)
print(sum(value[:m]))
