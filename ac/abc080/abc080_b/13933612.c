int main(){
        int n=0, fn=0, c;
        while((c=getchar()-48)!=-38) n=n*10+c, fn+=c;
        if(n%fn) puts("No");
        else puts("Yes");
        return 0;
}
