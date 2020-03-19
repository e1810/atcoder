st = set()
prev = "?"
cant = 0
for i in range(int(input())):
    s = input()
    if s[0]!=prev and prev!="?" or s in st:
        cant = 1
    prev = s[-1]
    st.add(s)
print("YNeos"[cant::2])

