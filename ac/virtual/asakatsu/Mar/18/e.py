class unionFind:
    def __init__(self, n):
        self.data = [-1] * (n+10)
    
    def find(self, x):
        if self.data[x]>=0:
            self.data[x] = self.find(self.data[x])
            return self.data[x]
        else: return x

    def unite(self, x, y):
        a, b = self.find(x), self.find(y)
        if a!=b:
            self.data[b] += self.data[a]
            self.data[a] = b


n, m = map(int, input().split())
p = list(map(int, input().split()))

tree = unionFind(n)
for i in range(m):
    x, y = map(int, input().split())
    tree.unite(p[x-1], p[y-1])

ans = 0
for i in range(n):
    if tree.find(i+1)==tree.find(p[i]): ans += 1
print(ans)
