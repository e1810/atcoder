#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll a, b, k, l;
	cin>>a>>b>>k>>l;

	ll ans;
	if(a*l<=b) cout << k*a << endl;
	else{
		ll x = k/l, y = k%l;
		cout << min(b*x + a*y, b*(x+1)) << endl;
	}
	return 0;
}
