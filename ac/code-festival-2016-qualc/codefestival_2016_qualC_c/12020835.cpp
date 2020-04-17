
#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	int n;
	scanf("%d", &n);
	int t[n], a[n];
	for(int i=0; i<n; i++) scanf("%d", &t[i]);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	int tk[n], ak[n];
	tk[0] = ak[n-1] = 1;
	for(int i=1; i<n; i++) tk[i] = (t[i]>t[i-1]);
	for(int i=n-2; i>=0; i--) ak[i] = (a[i]>a[i+1]);
	
	int_fast64_t ans = 1;
	for(int i=0; i<n; i++){
		if(tk[i] and ak[i]) ans *= (t[i]==a[i]);
		if(tk[i] and !ak[i]) ans *= (t[i]<=a[i]);
		if(!tk[i] and ak[i]) ans *= (t[i]>=a[i]);
		if(!tk[i] and !ak[i]) ans *= std::min(t[i], a[i]);
		ans %= 1000000007;
	}
	printf("%ld
", ans);
}
