main(n,fn){
        n = fn = 0;
        for(char c; (c=getchar())!='
';) n=n*10+c-'0', fn+=c-'0';
        if(n%fn) puts("No");
        else puts("Yes");
        return 0;
}
