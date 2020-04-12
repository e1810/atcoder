
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
        ll n;
        scanf("%ld", &n);
        char s[n+1];
        scanf("%s", s);

        std::vector<ll> r(n+1, 0), g(n+1, 0), b(n+1, 0);

        for(ll i=0; i<n; i++){
                if(s[i]=='R') r[i+1]++;
                if(s[i]=='G') g[i+1]++;
                if(s[i]=='B') b[i+1]++;
        }
        for(ll i=0; i<n; i++){
                r[i+1] += r[i];
                g[i+1] += g[i];
                b[i+1] += b[i];
        }

        ll ans = 0;
        for(ll i=0; i<n; i++){
                if(s[i]=='R'){
                        ll tmp = g[i] * (b[n]-b[i+1]) + (g[n]-g[i+1]) * b[i];
                        for(ll j=1; i+j<n && i-j>=0; j++){
                                if(s[i-j]=='G' and s[i+j]=='B' or s[i-j]=='B' and s[i+j]=='G') tmp--;
                        }
                        ans += tmp;
                }
                if(s[i]=='G'){
                        ll tmp = r[i] * (b[n]-b[i+1]) + (r[n]-r[i+1]) * b[i];
                        for(ll j=1; i+j<n && i-j>=0; j++){
                                if(s[i-j]=='R' and s[i+j]=='B' or s[i-j]=='B' and s[i+j]=='R') tmp--;
                        }
                        ans += tmp;
                }
                if(s[i]=='B'){
                        ll tmp = g[i] * (r[n]-r[i+1]) + (g[n]-g[i+1]) * r[i];
                        for(ll j=1; i+j<n && i-j>=0; j++){
                                if(s[i-j]=='G' and s[i+j]=='R' or s[i-j]=='R' and s[i+j]=='G') tmp--;
                        }
                        ans += tmp;
                }
        }

        printf("%ld
", ans);
        return 0;
}
