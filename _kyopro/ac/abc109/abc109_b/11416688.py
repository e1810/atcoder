
st = set()
cant = False
prev = "-"
for i in range(int(input())):
        s = input()
        if (prev!="-" and prev!=s[0]) or s in st: cant = True
        prev = s[-1]
        st.add(s)
print("YNeos"[cant::2])
