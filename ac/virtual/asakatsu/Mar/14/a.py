n, k, q = map(int, input().split())
a = [0] * n
for i in range(q): a[int(input())-1] += 1
s = sum(a)
for i in range(n): print("YNeos"[s-a[i]>=k::2])
