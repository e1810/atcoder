
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        ll n; scanf("%lld", &n);
        ll a[n];
        for(ll i=0; i<n; i++) scanf("%lld", &a[i]);

        ll I=1, ans=0;
        for(ll i=0; i<n; i++){
                if(a[i]==I) I++;
                else ans++;
        }
        if(I==1) ans=-1;
        printf("%lld
", ans);
        return 0;
}
