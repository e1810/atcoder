n = int(input()) - 1
ans = ""
while(n>=0):
    ans += chr(ord("a") + n%26)
    n = n//26 - 1
print(ans[::-1])
