#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ll n;
	scanf("%lld", &n);

	ll can[n+10], no[n+10];
	for(ll i=0; i<=n; i++) can[i] = 0, no[i] = 0;

	for(ll i=1; i<=n; i++){
		bool flag = false;
		queue<ll> stc; stc.push(i);
		while(stc.back()<=n){
			ll tmp = 0, m = stc.back(), moto = stc.back();
			no[m] = 1;
			while(m){
				tmp += m%10;
				m /= 10;
			}
			tmp += moto;
			if(tmp>n)break;
			if(can[tmp]==0 && no[tmp]==0) stc.push(tmp);
			else if(can[tmp]!=0){
				flag = true;
				break;
			}else break;
		}
		//printf("%lld ", stc.back());
		if(stc.back()==n || flag){
			while(!stc.empty()){
				ll m = stc.front(); stc.pop();
				can[m] = 1;
			}
		}else{
			while(!stc.empty()) stc.pop();
		}	
	}

	ll ans = 0;
	for(ll i=1; i<=n; i++) ans += can[i];
	printf("%lld\n", ans);
	return 0;
}
