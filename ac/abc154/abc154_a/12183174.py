
s = input().split()
a = list(map(int, input().split()))
a[s.index(input())] -= 1
print(*a)
