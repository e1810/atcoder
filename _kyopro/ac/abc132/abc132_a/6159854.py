
def main():
    s = input()
    if len(set(s))==2:
        for i in set(s):
            if s.count(i)!=2:
                print("No")
                exit()
        print("Yes")
    else: print("No")

if __name__=="__main__": main()
