
a, b, c = map(int ,input().split())
w, d = divmod(c, (7*a + b))
print(7*w+min(7, (d+a-1)//a))
