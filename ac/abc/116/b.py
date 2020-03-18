s = int(input())
st = set([s])
i = 1
while 1:
    if s%2: s = 3*s+1
    else: s //= 2
    if s in st:
        print(i+1)
        break
    st.add(s)
    i += 1

