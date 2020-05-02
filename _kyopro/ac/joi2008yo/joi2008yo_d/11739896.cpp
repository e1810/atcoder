
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
        int m;
        scanf("%d", &m);
        std::vector<P> a(m);
        for(int i=0; i<m; i++) scanf("%ld %ld", &a[i].first, &a[i].second);
        P st = a[0];
        for(int i=0; i<m; i++){
                a[i].first -= st.first;
                a[i].second -= st.second;
        }

        int n;
        scanf("%d", &n);
        std::vector<P> b(n);
        for(int i=0; i<n; i++) scanf("%ld %ld", &b[i].first, &b[i].second);
        std::sort(b.begin(), b.end());



        for(P p: b){
                bool cant = false;
                for(P q: a){
                        ll x = p.first+q.first, y = p.second+q.second;
                        if(P(x, y) != *std::lower_bound(b.begin(), b.end(), P(x, y))) cant = true;
                }
                if(!cant){
                        printf("%ld %ld
", p.first-st.first, p.second-st.second);
                        break;
                }
        }
        return 0;
}
