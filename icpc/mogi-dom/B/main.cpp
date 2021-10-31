#include<bits/stdc++.h>

int main(){
    while(true){
        int h, w;
        scanf("%d %d", &h, &w);
        if(h==0 && w==0) break;

        char v[h][w+1];
        for(int i=0; i<h; i++) scanf("%s", v[i]);
        int vertsum = 0, horisum = 0, sum = 0;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                sum += v[i][j] - '0';
                vertsum += (i+1) * (v[i][j] - '0');
                horisum += (j+1) * (v[i][j] - '0');
            }
        }
        
        double vertans = vertsum / (double) sum;
        double horians = horisum / (double) sum;
        printf("%.10lf %.10lf\n", vertans, horians);
    }
    return 0;
}
        
