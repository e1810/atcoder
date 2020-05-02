
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;

int main(){
	int n, ans = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int tmp;
		scanf("%d", &tmp);
		ans += tmp-1;
	}
	printf("%d
", ans);
	return 0;
}
