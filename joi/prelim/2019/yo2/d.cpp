#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll m, r;
	cin >> m >> r;

	ll mv[10][10] = {
		{0, 1, 2, 3, 2, 3, 4, 3, 4, 5},
		{1, 0, 1, 2, 1, 2, 3, 2, 3, 4},
		{2, 1, 0, 1, 2, 1, 2, 3, 2, 3},
		{3, 2, 1, 0, 3, 2, 1, 4, 3, 2},
		{2, 1, 2, 3, 0, 1, 2, 1, 2, 3},
		{3, 2, 1, 2, 1, 0, 1, 2, 1, 2},
		{4, 3, 2, 1, 2, 1, 0, 3, 2, 1},
		{3, 2, 3, 4, 1, 2, 3, 0, 1, 2},
		{4, 3, 2, 3, 2, 1, 2, 1, 0, 1},
		{5, 4, 3, 2, 3, 2, 1, 2, 1, 0}
	};

	ll b = 0, ans = 1e18;
	while(m*b<10000000){
		ll tar = m*b + r;
		ll here = tar%10, tmp = 1; tar /= 10;
		for(ll i=tar; tar/10; tar/=10){
			ll to = tar%10;
			tmp += mv[here][to] + 1;
			here = to;
			//printf("%lld ", to);
		}
		if(tar!=0) tmp += mv[here][tar]+1 + mv[tar][0];
		else tmp += mv[here][0];
		ans = min(ans, tmp);
		b++;
	}
	printf("%lld\n", ans);
	return 0;
}

	
