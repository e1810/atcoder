
#include<bits/stdc++.h>
using namespace std;
using ll = int_fast64_t;

int main(){
        ll h, w;
        scanf("%ld %ld", &h, &w);

        vector<string> ss(h);
        for(ll i=0; i<h; i++) cin>>ss[i];

        vector<vector<ll>> mp1(h, vector<ll>(0));
        for(ll i=0; i<h; i++){
                string s = ss[i];
                char prev = s[0];
                ll cnt = 0;
                for(ll j=0; j<w; j++){
                        if(prev==s[j]) cnt++;
                        else{
                                for(ll k=0; k<cnt; k++) mp1[i].push_back(cnt*(s[j]=='#'));
                                cnt = 1;
                        }
                        prev = s[j];
                }
                for(ll j=0; j<cnt; j++) mp1[i].push_back(cnt*(s[w-1]=='.'));
        }

        vector<vector<ll>> mp2(w, vector<ll>(0));
        for(ll i=0; i<w; i++){
                char prev = ss[0][i];
                ll cnt = 0;
                for(ll j=0; j<h; j++){
                        if(prev==ss[j][i]) cnt++;
                        else{
                                for(ll k=0; k<cnt; k++) mp2[i].push_back(cnt*(ss[j][i]=='#'));
                                cnt = 1;
                        }
                        prev = ss[j][i];
                }
                for(ll j=0; j<cnt; j++) mp2[i].push_back(cnt*(ss[h-1][i]=='.'));
        }

        ll ans = 0;
        for(ll i=0; i<h; i++){
                for(ll j=0; j<w; j++){
                        ans = max(ans, mp1[i][j]+mp2[j][i]-1);
                }
        }
        printf("%ld
", ans);
        return 0;
}
