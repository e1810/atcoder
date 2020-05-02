
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        ll n;
        scanf("%lld", &n);
        string s;
        cin>>s;

        ll J[n+1], I[n+1];
        J[0] = 0; I[0] = 0;
        for(ll i=0; i<n; i++){
                J[i+1] = (s[i]=='J');
                I[i+1] = (s[i]=='I');
                J[i+1] += J[i];
                I[i+1] += I[i];
        }

        ll topj = 0, mido = 0, boti = 0;
        for(ll i=1; i<n+1; i++){
                if(s[i-1]!='O') continue;
                mido += J[i-1] * (I[n]-I[i]);
                topj += (J[i-1]+1)*(I[n]-I[i]);
                boti += J[i-1] * (I[n]-I[i]+1);
        }

        ll addo = 0;
        for(ll i=1; i<n+1; i++) addo = max(addo, J[i-1]*(I[n]-I[i-1]));
        mido += addo;

        printf("%lld
", max({topj, mido, boti}));
        return 0;
}
