
n, m = map(int, input().split())
st = set(range(1,m+1))
for i in range(n):
        k, *a = map(int, input().split())
        st = st & set(a)
print(len(st))
