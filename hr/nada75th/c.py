n = int(input())
st = set()
for i in range(1, n): st.add(n//i)
print(len(st))
