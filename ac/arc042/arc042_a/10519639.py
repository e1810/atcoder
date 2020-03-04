
n, m, *a = map(int, open(0).read().split())
used = [0] * n
for i in a[::-1]:
        if not used[i-1]:
                used[i-1] = 1
                print(i)
for i in range(n):
        if not used[i]: print(i+1)
