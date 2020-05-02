
#include<stdio.h>

int main(){
        int n;
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);

        int ans = 0;
        for(int i=0; i<10; i++) for(int j=0; j<10; j++) for(int k=0; k<10; k++){
                int oki=0;
                for(int l=0; l<n; l++){
                        if(oki==0 && s[l]-'0'==i) oki++;
                        else if(oki==1 && s[l]-'0'==j) oki++;
                        else if(oki==2 && s[l]-'0'==k) oki++;
                }
                if(oki==3) ans++;
        }

        printf("%d
", ans);
        return 0;
}
