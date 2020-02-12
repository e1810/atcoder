x = "T"+input()+"S"
st = []
prev = "S"
cnt = 0
for i in x:
    if prev==i:
        cnt += 1
    else:
        st.append(cnt)
        cnt = 0
    prev = i

ans = len(x)-2
st.pop(0)

print(ans)

