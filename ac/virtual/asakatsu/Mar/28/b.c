#include<stdio.h>
typedef long long ll;

int main(void){
	ll n;
	scanf("%lld", &n);
	
	ll x = 1;
	for(ll i=2; i*i<=n; i++){
		if(n%i==0) x = i;
	}
	printf("%lld\n", x+n/x-2);
	return 0;
}
