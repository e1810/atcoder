
#include<stdio.h>

int main(){
        int h, w, a, b;
        scanf("%d %d %d %d", &h, &w, &a, &b);
        for(int i=0; i<h; i++){
                for(int j=0; j<w; j++) printf("%d", (i<b)^(j<a));
                puts("");
        }
        return 0;
}
