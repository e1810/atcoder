#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;

int main(){
	ll n, m;
	scanf("%lld %lld", &n, &m);
	vector<ll> a(n+1);
	a[0] = 0;
	for(int i=1; i<=n; i++) scanf("%lld", &a[i]);
	vector<P> lr(m);
	for(int i=0; i<m; i++) scanf("%lld %lld", &lr[i].first, &lr[i].second);

	ll ans = 0;
	for(int i=0; i<(1<<(n+1)); i++){
		vector<int> used(n+1);
		ll tmp = 0;
		for(int j=0; j<n+1; j++){
			if(i>>j&1){
				used[j] = 1;
				tmp += a[j];
			}
		}
		
		for(int j=0; j<=n; j++)printf("%d,", used[j]);printf("  %lld\n", tmp);
		for(int j=1; j<=n; j++) used[j] += used[j-1];

		for(int j=0; j<m; j++){
			if(used[lr[j].second]-used[lr[j].first-1] > 1)break;
			if(j==m-1) ans = max(ans, tmp);
		}
	}

	printf("%lld\n", ans);
	return 0;
}

