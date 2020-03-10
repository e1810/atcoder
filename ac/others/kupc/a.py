for i in range(int(input())):
    s = input()[::-1]
    used = [0]*len(s)

    ans = 0
    for j in range(len(s)):
        if s[j:j+5] in ("otoyk", "oykot"):
            for k in range(5):
                if used[j+k]: break
                else: used[j+k] = 1
            else: ans += 1
    print(ans)
