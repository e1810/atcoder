a = [int(input())for i in range(6)]
print(sum(a)-min(a[:4])-min(a[4:]))
