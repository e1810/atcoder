#include<stdio.h>
typedef long long ll;
int main(){
	ll a, b, x, l, r, i = 1000000, ans;
	scanf("%lld %lld %lld", &a, &b, &x);
	l = 0, r = 1000000001;
	while(l-r>1 || i--){
		ll m = (l+r)/2;
		ll n = 0;
		for(ll j=m; j!=0; j/=10) n++;
		if(a*m+b*n<=x) ans = l = m;
		else r = m;
	}
	printf("%lld\n", ans);
	return 0;
}
