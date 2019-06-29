
def main():
    n = int(input())
    p = list(map(int, input().split()))
    ans  = 0
    for i in range(n-2):
        if p[i+1] == sorted(p[i:i+3])[1]: ans += 1
    print(ans)

if __name__=="__main__": main()
