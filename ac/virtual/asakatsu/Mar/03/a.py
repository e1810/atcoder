a, b, c, d = map(int, input().split())
print("YNeos"[(abs(a-b)>d or abs(b-c)>d) and abs(a-c)>d::2])
