
a = input().split()
ng = [input()for i in range(int(input()))]
for i in range(len(a)):
    l = len(a[i])
    for w in ng:
        if len(w)!=l: continue
        for j in range(l):
            if a[i][j]!=w[j] and w[j]!="*":
                break
        else:
            a[i] = "*" * l
            break
print(*a)
