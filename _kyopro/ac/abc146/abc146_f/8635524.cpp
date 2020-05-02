
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        ll n, m;
        string s;
        cin >> n >> m >> s;
        reverse(s.begin(), s.end());

        vector<ll> ans(0);
        ll here = 0;
        while(here!=n){
                ll nx = here+m;
                if(here+m>n) nx=n;
                while(s[nx]=='1'){
                        nx--;
                        if(nx<=here){
                                puts("-1");
                                return 0;
                        }
                }
                ans.push_back(nx-here);
                here = nx;
        }

        for(ll i=ans.size()-1; i>=0; i--) printf("%lld
", ans[i]);
        return 0;
}
