s = input()
st = set()
for i in (1, 2, 3):
    for j in range(len(s)-i+1):
        t = s[j:j+i]
        st.add(t)
        if i==1:
            st.add(".")
        if i==2:
            st.add(t[0]+".")
            st.add("."+t[1])
            st.add("."+".")
        if i==3:
            st.add(t[0]+t[1]+".")
            st.add(t[0]+"."+t[2])
            st.add(t[0]+"."+".")
            st.add("."+t[1]+t[2])
            st.add("."+t[1]+".")
            st.add("."+"."+t[2])
            st.add(".""."+".")
print(len(st))
