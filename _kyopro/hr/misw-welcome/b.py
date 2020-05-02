n, *x = map(int, input().split())
y = [0] * 3
s = "PCM"
for i in range(n): y[s.index(input()[0])] += 1
ng = False
for i in range(3): ng |= (x[i]>y[i])
print(["Happy", "Unhappy"][ng])
