
n = int(input())
a = [[i+1,x] for i,x in enumerate(map(int, input().split()))]
a.sort(key=lambda x:x[1])
print(*list(zip(*a))[0])
