
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
        ll x; scanf("%lld", &x);
        ll prime[100010];
        bool is_prime[100011];

        ll p=0;
        for(ll i=0; i<=100010; i++) is_prime[i] = 1;
        is_prime[0] = is_prime[1] = 0;

        for(ll i=2; i<=100010; i++){
                if(is_prime[i]){
                        prime[p++] = i;
                        for(ll j=2*i; j<100010; j+=i) is_prime[j] = 0;
                }
        }

        ll ans = 0;
        for(ll i=x; i<=100010; i++){
                if(is_prime[i]){
                        ans = i;
                        break;
                }
        }
        printf("%lld
", ans);
        return 0;
}
