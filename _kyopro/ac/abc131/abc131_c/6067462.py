
def gcd(a, b):
    if a<b: a, b = b, a
    while a%b:
        a, b = b, a%b
    return b

def main():
    a, b, c, d = map(int, input().split())
    ans = b - a + 1
    if a%c: ans -= b//c-a//c
    else: ans -= b//c+1-a//c

    if a%d: ans -= b//d-a//d
    else: ans -= b//d+1-a//d

    sks = (c*d) // gcd(c, d)
    if a%sks: ans += b//sks-a//sks
    else: ans += b//sks+1-a//sks
    print(ans)

if __name__=="__main__": main()
