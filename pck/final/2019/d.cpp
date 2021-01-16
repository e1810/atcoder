#include<cstdio>
#include<cstdint>
using ll = int_fast64_t;

int main(){
	ll n, m;
	scanf("%ld %ld", &n, &m);
	char s[n+1];
	scanf("%s", s);
	ll cnt = 0;
	for(int i=1; i<n; i++){
		if(s[i-1]=='o' && s[i]=='o') cnt++;
	}
	ll ans = n, p = cnt;
	for(int i=0; i<m; i++){
		ans += p * 3;
		p <<= 1;
	}
	printf("%ld\n", ans);
	return 0;
}
	
	
