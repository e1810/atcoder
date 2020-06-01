int n, fn, c;
int main(){
        while((c=getchar()-48)!=-38) n=n*10+c, fn+=c;
        if(n%fn) puts("No");
        else puts("Yes");
        return 0;
}
