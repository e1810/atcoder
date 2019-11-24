#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        ll d, g;
        scanf("%lld %lld", &d, &g);
        vector<ll> p(d), c(d);
        for(int i=0; i<d; i++) scanf("%lld %lld", &p[i], &c[i]);
        for(int i=0; i<d; i++) c[i] += (i+1)*100 * p[i];

        ll mini = 10e9;
        for(int i=0; i<(1<<d); i++){
                ll summa = 0, cnt = 0, max_idx = 0;
                for(int j=0; j<d; j++){
                        if((i>>j)&1){
                                summa += c[j];
                                cnt += p[j];
                        }else max_idx = j;
                }
                ll some = (max((ll)0, g-summa)+((max_idx+1)*100-1))/((max_idx+1)*100);
                if(some <= p[max_idx]) mini = min(mini, cnt+some);
        }
        printf("%lld\n", mini);
        return 0;
}

