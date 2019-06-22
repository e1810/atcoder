
from sys import stdin
def main():
    n = int(input())
    ab = [list(map(int, stdin.readline().split())) for i in range(n)]
    ab.sort(key=lambda x:x[1])
    now = 0
    cnt = 0

    for a, b in ab:
        now += a
        if now > b: break
    else:
        print("Yes")
        return 0
    print("No")


if __name__=="__main__": main()
