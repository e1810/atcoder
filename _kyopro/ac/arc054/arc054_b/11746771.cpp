
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

double p;

double func(double x){
        return x + p / pow(2, 2*x/3.0);
}

int main(){
        scanf("%lf", &p);
        double l=0, r=1e18;
        while(r-l>1e-8){
                double c1=(l*2+r)/3.0, c2=(l+r*2)/3.0;
                if(func(c1)<func(c2)) r = c2;
                else l = c1;
        }
        printf("%.10lf
", func(l));
        return 0;
}
