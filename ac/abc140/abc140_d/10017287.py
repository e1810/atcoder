
n, k = map(int, input().split())
s = []
prev = "-"
cnt = 0
for i in input():
    if prev!=i:
        s.append(cnt)
        cnt = 0
    else:
        cnt += 1
    prev = i
s.append(cnt)
print(sum(s)+min(2*k, len(s)-2))
