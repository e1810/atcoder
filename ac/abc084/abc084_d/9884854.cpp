
#include<bits/stdc++.h>
using ll = long long;

int main(){
        ll prime[100000];
        for(ll i=1; i<1e5; i++) prime[i] = 1;
        prime[0] = prime[1] =  0;
        for(ll i=2; i<1e5; i++){
                if(prime[i]){
                        for(ll j=2*i; j<1e5; j+=i) prime[j]=0;
                }
        }

        ll good[100000];
        for(ll i=0; i<1e5; i++) good[i]=0;
        for(ll i=1; i<1e5; i+=2){
                if(prime[i] && prime[(i+1)/2]) good[i]=1;
        }
        for(ll i=1; i<1e5; i++) good[i] += good[i-1];

        ll q;
        scanf("%lld", &q);

        for(ll i=0; i<q; i++){
                ll l, r;
                scanf("%lld %lld", &l, &r);
                printf("%lld
", good[r]-good[l-1]);
        }
        return 0;
}
