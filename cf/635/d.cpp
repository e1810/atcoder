#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	int qq; scanf("%d", &qq);
	while(qq--){
		int rc, gc, bc;
		scanf("%d %d %d ", &rc, &gc, &bc);
		ll r[rc], g[gc], b[bc];
		for(int i=0; i<rc; i++) scanf("%lld", &r[i]);
		for(int i=0; i<gc; i++) scanf("%lld", &g[i]);
		for(int i=0; i<bc; i++) scanf("%lld", &b[i]);
		std::sort(r, r+rc);
		std::sort(g, g+gc);
		std::sort(b, b+bc);
		
		for(ll x: r){
			int idx = std::lower_bound(g, g+gc, x) - g;
			ll y = g[idx];

			
		}

	}
}
	
