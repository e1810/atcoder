#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n;
	scanf("%lld", &n);
	bool can = false;
	
	char c[n]; ll v[n];
	for(ll i=0; i<n; i++) scanf("%c", &c[i], &v[i]);

	ll ans = 0, tmp = 0;
	char prev = c[0], firstc = c[0];
	for(ll i=1; i<n; i++){
		if(prev == c[i]){
			if(prev == firstc){
				ans = max(ans, tmp-v[i-1]);
				tmp = v[i];
			}else{
				ans = max(ans, tmp);	
				tmp = v[i];
			}
		}else{
			tmp += v[i];
		}
		prev = c[i];
	}

	printf("%lld\n", ans);
	return 0;
}

