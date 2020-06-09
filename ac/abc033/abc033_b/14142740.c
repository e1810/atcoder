main(){
        int n, p, sum = 0, max = 0, pos;
        char s[1000][21];
        scanf("%d", &n);
        while(n--){
                scanf("%s %d", s[n], &p);
                if(p>=max){
                        pos = n;
                        max = p;
                }
                sum += p;
        }
        if(max*2>sum) printf("%s
", s[pos]);
        else puts("atcoder");
        return 0;
}
