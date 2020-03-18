s = input()
for i in range(1, len(s)):
    t = s[:len(s)-i]
    if t[:len(t)//2]*2==t:
        print(len(s)-i)
        break
