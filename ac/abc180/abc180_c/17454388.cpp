#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
    ll n;
    scanf("%ld", &n);
    std::vector<ll> anses;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            anses.push_back(i);
            if(i*i!=n) anses.push_back(n/i);
        }
    }
    std::sort(anses.begin(), anses.end());
    for(ll x: anses) printf("%ld
", x);
    return 0;
}
