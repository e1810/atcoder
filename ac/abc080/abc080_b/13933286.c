int n, fn;
char c;
int main(void){
        while((c=getchar())!='
') n = n*10+c-'0';
        for(int m=n; m; m/=10) fn += m%10;
        if(n%fn) puts("No");
        else puts("Yes");
        return 0;
}
