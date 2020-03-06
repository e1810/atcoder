
s, k = input(), int(input())
st = set()
for i in range(len(s)-k+1):
        st.add(s[i:i+k])
print(len(st))
