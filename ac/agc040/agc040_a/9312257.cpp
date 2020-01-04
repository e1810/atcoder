
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

int main(){
        std::string s; cin>>s;
        std::vector<P> aro(0);

        char prev=s[0];
        ll cnt=0;
        for(char c: s){
                if(prev==c) cnt++;
                else{
                        aro.push_back({(prev=='<'), cnt});
                        cnt = 1;
                }
                prev = c;
        }
        aro.push_back({(prev=='<'), cnt});

        vector<ll> ans(s.size()+1);
        ll idx = 0;
        for(P p: aro){
                if(p.first){
                        for(ll i=0; i<=p.second; i++){
                                ans[idx+i] = max(ans[idx+i], i);
                        }
                }else{
                        for(ll i=0; i<=p.second; i++){
                                ans[idx+i] = max(ans[idx+i], p.second-i);
                        }
                }
                idx += p.second;
        }
        //for(ll i: ans) printf("%lld ", i);puts("");
        printf("%lld
", accumulate(ans.begin(), ans.end(), 0LL));
        return 0;
}
