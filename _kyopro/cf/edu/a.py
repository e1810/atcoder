for i in range(int(input())):
    r, g, b = map(int, input().split())
    if r+g>=b and r+b>=g and g+b>=r: print("Yes")
    else: print("No")
