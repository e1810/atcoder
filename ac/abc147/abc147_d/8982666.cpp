
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

int main(){
        ll n; scanf("%lld", &n);
        ll zero[64], one[64];
        for(ll i=0; i<64; i++) zero[i]=0, one[i]=0;
        for(ll i=0; i<n; i++){
                ll a; scanf("%lld", &a);
                for(ll j=0; j<64; j++){
                        if((a>>j)&1) one[j]++;
                        else zero[j]++;
                }
        }

        ll ans = 0, wei = 1;
        for(ll i=0; i<64; i++){
                ll tmp = (zero[i]*one[i])%MOD;
                ans += (tmp*wei)%MOD; ans %= MOD;
                wei *= 2; wei %= MOD;
        }
        printf("%lld
", ans%MOD);

        return 0;
}
