
#include<bits/stdc++.h>
using ll = int_fast64_t;

bool judge(ll n, ll k){
        while(n%k==0) n/=k;
        return n%k==1;
}


int main(){
        ll n;
        scanf("%ld", &n);

        std::set<ll> st;
        ll m = n;
        for(ll i=2; i*i<=m; i++){
                if(m%i==0){
                        st.insert(i);
                        if(i*i!=m) st.insert(m/i);
                }
        }

        m = n-1;
        for(ll i=2; i*i<=m; i++){
                if(m%i==0){
                        st.insert(i);
                        if(i*i!=m) st.insert(m/i);
                }
        }

        ll ans = 1 + (n!=2);
        for(ll i: st) ans += judge(n, i);
        printf("%ld
", ans);
        return 0;
}
