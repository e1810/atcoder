for i in range(int(input())):
    a, b, c = map(int, input().split())
    p = max(map(int, input().split()))
    s = max(map(int, input().split()))
    print("YNEOS"[p<s::2])
