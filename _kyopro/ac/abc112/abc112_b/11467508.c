
#include<stdio.h>

int main(){
        int n, t;
        scanf("%d %d", &n, &t);
        int mincost=1001;
        for(int i=0; i<n; i++){
                int c, nt;
                scanf("%d %d", &c, &nt);
                if(nt<=t && c<=mincost) mincost = c;
        }
        if(mincost>1000) puts("TLE");
        else printf("%d
", mincost);
}
