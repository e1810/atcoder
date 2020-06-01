main(n,fn,c){
        n = fn = 0;
        while((c=getchar()-48)!=-38) n=n*10+c, fn+=c;
        if(n%fn) puts("No");
        else puts("Yes");
}
