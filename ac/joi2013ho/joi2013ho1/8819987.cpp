
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        ll n;
        scanf("%lld", &n);
        int denkyu[n];
        for(ll i=0; i<n; i++) scanf("%d", &denkyu[i]);

        vector<ll> a(n);
        int prev = !denkyu[0];
        ll cnt = 0, len = 0;
        for(ll i=0; i<n; i++){
                if(denkyu[i]==prev){
                        a[len] = cnt;
                        len++;
                        cnt = 1;
                }else{
                        cnt++;
                }
                prev = denkyu[i];
        }
        a[len] = cnt; len++;


        if(len==1){
                printf("%lld
", a[0]);
                return 0;
        }

        ll ans = a[0]+a[1];
        for(ll i=1; i<len-1; i++) ans = max(ans, a[i-1]+a[i]+a[i+1]);
        printf("%lld
", ans);

        return 0;
}
