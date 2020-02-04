
#include<bits/stdc++.h>
using ll = long long;

int main(){
        ll n;
        scanf("%lld", &n);
        std::multiset<ll> st;
        for(ll i=0; i<n; i++){
                ll tmp;
                scanf("%lld", &tmp);
                st.insert(tmp);
        }

        ll m, ans = 1;;
        scanf("%lld", &m);
        for(ll i=0; i<m; i++){
                ll tmp;
                scanf("%lld", &tmp);
                if(st.find(tmp)==st.end()) ans = 0;
                else st.erase(st.find(tmp));
        }

        if(ans) puts("YES");
        else puts("NO");
        return 0;
}
