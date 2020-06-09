main(){
        int n, p, sum = 0, max = 0;
        char cand[21], s[21];
        scanf("%d", &n);
        while(n--){
                scanf("%s %d", s, &p);
                if(p>=max){
                        for(int i=0; i<21; i++) cand[i] = s[i];
                        max = p;
                }
                sum += p;
        }
        if(max*2>sum) printf("%s
", cand);
        else puts("atcoder");
        return 0;
}
