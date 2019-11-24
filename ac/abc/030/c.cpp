#include<bits/stdc++.h>
#include<algorithm>
typedef long long ll;
using namespace std;

int main(){
	ll n, m, x, y;
	scanf("%lld %lld %lld %lld", &n, &m, &x, &y);

	vector<ll> A(n);
	for(ll i=0; i<n; i++) scanf("%lld", &A[i]);
	vector<ll> B(m);
	for(ll i=0; i<m; i++) scanf("%lld", &B[i]);
	
	ll time = A[0];
	bool aNow = true;
	ll ans = 0;
	while(true){
		if(aNow){
			time += x;
			ll idx = lower_bound(B.begin(), B.end(), time) - B.begin();
			//cout << idx << endl;
			aNow = false;
			ans++;
			if(idx>=m) break;
			else if(B[idx-1]!=time) time = B[idx];
		}else{
			time += y;
			ll idx = lower_bound(A.begin(), A.end(), time) - A.begin();
			//cout << idx << endl;
			aNow = true;
			ans++;
			if(idx>=n) break;
			else if(A[idx-1]!=time) time = A[idx];
		}
	}
	printf("%lld\n", ans/2);
	return 0;
}
