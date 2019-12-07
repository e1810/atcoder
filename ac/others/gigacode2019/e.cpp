#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e11;

int main(){
	ll n, l;
	scanf("%lld %lld", &n, &l);
	vector<vector<double>> cars(n+2, vector<double>(3));
	cars[0][0] = 0;
	scanf("%lf %lf", &cars[0][1], &cars[0][2]);
	for(int i=1; i<=n; i++) scanf("%lf %lf %lf", &cars[i][0], &cars[i][1], &cars[i][2]);
	cars[n+1][0] = l;

	sort(cars.begin(), cars.end());

	vector<double> dp(n+2);
	fill(dp.begin(), dp.end(), INF);
	dp[0] = 0;

	for(int i=0; i<n+1; i++){
		ll j = 1;
		while(cars[i+j][0]<=cars[i][0]+cars[i][2]){
			dp[i+j] = min(dp[i+j], dp[i]+(cars[i+j][0]-cars[i][0])/cars[i][1]);
			j++;
			if(i+j>n+1) break;
		}

	}
	
	if(dp[n+1]<INF) printf("%.15lf\n", dp[n+1]);
	else puts("impossible");

	return 0;
}
