#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	double n;
	scanf("%lf", &n);
	vector<pair<ll, ll>> xy(n);
	for(int i=0; i<n; i++) scanf("%lld %lld", &xy[i].first, &xy[i].second);
	
	double summa = 0;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			summa += sqrt(pow(xy[i].first-xy[j].first,2) + pow(xy[i].second-xy[j].second, 2));
		}
	}
	printf("%lf\n", summa*2.0/n);
	return 0;
}

