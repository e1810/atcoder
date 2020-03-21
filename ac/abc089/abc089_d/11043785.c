
#include<stdio.h>
#include<stdlib.h>

int main(){
        int h, w, d;
        scanf("%d %d %d", &h, &w, &d);

        int zah[h*w+1][2];
        for(int i=0; i<h; i++){
                for(int j=0; j<w; j++){
                        int tmp;
                        scanf("%d", &tmp);
                        zah[tmp][0] = i;
                        zah[tmp][1] = j;
                }
        }
        zah[0][0] = zah[0][1] = 0;

        int dist[h*w+1];
        for(int i=d; i<=h*w; i++){
                dist[i] = abs(zah[i-d][0]-zah[i][0]) + abs(zah[i-d][1]-zah[i][1]);
                dist[i] += dist[i-d];
        }

        int q;
        scanf("%d", &q);
        for(int i=0; i<q; i++){
                int l, r;
                scanf("%d %d", &l, &r);
                printf("%d
", dist[r]-dist[l]);
        }
        return 0;
}
