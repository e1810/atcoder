
def main():
    n, l= map(int, input().split())
    a = [i for i in range(l, l+n)]
    ans = sum(a) - a[list(map(abs, a)).index(min(list(map(abs, a))))]
    print(ans)


if __name__=="__main__": main()
