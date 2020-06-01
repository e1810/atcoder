#pragma target("Ofast")
main(n,fn,c){
        n = fn = 0;
        while((c=getchar())!='
') n=n*10+c-'0', fn+=c-'0';
        if(n%fn) puts("No");
        else puts("Yes");
        return 0;
}
