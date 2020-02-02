
#include<stdio.h>

int main(){
        int w, h, n;
        scanf("%d %d %d", &w, &h, &n);

        int mp[w][h];
        for(int i=0; i<w*h; i++) mp[i/h][i%h]=1;

        for(int i=0; i<n; i++){
                int x, y, a;
                scanf("%d %d %d", &x, &y, &a);
                switch(a){
                        case 1:
                                for(int j=0; j<x*h; j++) mp[j/h][j%h]=0;
                                break;
                        case 2:
                                for(int j=x*h; j<w*h; j++) mp[j/h][j%h]=0;
                                break;
                        case 3:
                                for(int j=0; j<w*y; j++) mp[j%w][j/w]=0;
                                break;
                        case 4:
                                for(int j=w*y; j<w*h; j++) mp[j%w][j/w]=0;
                                break;
                }
        }

        //for(int i=0; i<w; i++){for(int j=0; j<h; j++)printf("%d ", mp[i][j]);puts("");}

        int sm = 0;
        for(int i=0; i<w*h; i++) sm += mp[i/h][i%h];
        printf("%d
", sm);
        return 0;
}
