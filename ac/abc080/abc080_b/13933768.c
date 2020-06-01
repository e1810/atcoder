int n, fn, c;
int main(){
        while((c=getchar())!='
') n=n*10+c-'0', fn+=c-'0';
        if(n%fn) puts("No");
        else puts("Yes");
        return 0;
}
