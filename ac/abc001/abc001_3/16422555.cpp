#include<bits/stdc++.h>

int main(){
        double x;
        double n;
        scanf("%lf %lf", &x, &n);

        int n_i = (int)(n*10/6.0);
        if(n_i%10>4) n_i += 10;
        n_i -= n_i%10;
        n = n_i / 100.0;
        int w = (n>=0.3) + (n>=1.6) + (n>=3.4)
                + (n>=5.5) + (n>=8.0) + (n>=10.8)
                + (n>=13.9) + (n>=17.2) + (n>=20.8)
                + (n>=24.5) + (n>=28.5) + (n>=32.7);
        if(!w){
                puts("C 0");
                return 0;
        }

        x /= 10.0;
        if(x<11.25) printf("N");
        else if(x<33.75) printf("NNE");
        else if(x<56.25) printf("NE");
        else if(x<78.75) printf("ENE");
        else if(x<101.25) printf("E");
        else if(x<123.75) printf("ESE");
        else if(x<146.25) printf("SE");
        else if(x<168.75) printf("SSE");
        else if(x<191.25) printf("S");
        else if(x<213.75) printf("SSW");
        else if(x<236.25) printf("SW");
        else if(x<258.75) printf("WSW");
        else if(x<281.25) printf("W");
        else if(x<303.75) printf("WNW");
        else if(x<326.25) printf("NW");
        else if(x<348.75) printf("NNW");
        else printf("N");
        printf(" %d
", w);
        return 0;
}
