int main(){
        int n, r=0, b=0;
        scanf("%d", &n);
        char c;
        for(int i=0; i<n; i++){
                getchar();
                for(int j=0; j<n; j++){
                        c = getchar();
                        if(c=='R') r++;
                        if(c=='B') b++;
                }
        }
        if(r>b) puts("TAKAHASHI");
        else if(r<b) puts("AOKI");
        else puts("DRAW");
        return 0;
}
