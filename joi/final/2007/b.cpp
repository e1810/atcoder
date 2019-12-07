#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, k;
	scanf("%lld %lld", &n, &k);

	vector<bool> card(n+1);
	fill(card.begin(), card.end(), 0);
	for(ll i=0; i<k; i++){
		ll tmp;
		scanf("%lld", &tmp);
		card[tmp] = true;
	}

	ll ans = 0, fact = 0, tmp = 0;
	for(ll i=1; i<=n; i++){
		if(card[i]){
			fact++;
			tmp++;
			ans = max(ans, tmp);
		}else{
			if(card[0]){
				if(fact==tmp){
					tmp++;
					ans = max(ans, tmp);
				}else{
					ans = max(ans, tmp);
					tmp = fact + 1;
				}
				fact = 0;
			}else{
				fact = tmp = 0;
			}
			ans = max(ans, fact);
		}
	}
	
	printf("%lld\n", ans);
	return 0;
}
