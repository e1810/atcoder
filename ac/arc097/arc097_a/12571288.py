s = input()
k = int(input())

st = set()
for i in range(len(s)):
    for j in range(i+1, len(s)+1):
        if j-i<=k: st.add(s[i:j])
print(sorted(list(st))[k-1])
