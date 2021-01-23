#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int n;
	scanf("%d", &n);
	ll x[n], y[n];
	REP(i, 0, n) scanf("%ld %ld", &x[i], &y[i]);

	int m;
	scanf("%d", &m);
	ll xk[m+1], yk[m+1], xt[m+1], yt[m+1];
	bool swp[m+1] = {};
	xk[0] = yk[0] = 1;
	xt[0] = yt[0] = 0;
	REP(i, 0, m){
		int t;
		scanf("%d", &t);
		if(t==1){
			xk[i+1] = yk[i];
			yk[i+1] = xk[i];
			xt[i+1] = yt[i];
			yt[i+1] = xt[i];
			yk[i+1] *= -1;
			yt[i+1] *= -1;
			swp[i+1] = true ^ swp[i];
		}
		if(t==2){
			xk[i+1] = yk[i];
			yk[i+1] = xk[i];
			xt[i+1] = yt[i];
			yt[i+1] = xt[i];
			xk[i+1] *= -1;
			xt[i+1] *= -1;
			swp[i+1] = true ^ swp[i];
		}
		if(t==3){
			ll z;
			scanf("%ld", &z);
			xk[i+1] = -1 * xk[i];
			xt[i+1] = 2 * z - xt[i];
			yk[i+1] = yk[i];
			yt[i+1] = yt[i];
			swp[i+1] = swp[i];
		}
		if(t==4){
			ll z;
			scanf("%ld", &z);
			yk[i+1] = -1 * yk[i];
			yt[i+1] = 2 * z - yt[i];
			xk[i+1] = xk[i];
			xt[i+1] = xt[i];
			swp[i+1] = swp[i];
		}
		//printf("%ld %ld %ld %ld
", xk[i+1], xt[i+1], yk[i+1], yt[i+1]);
	}

	int q;
	scanf("%d", &q);
	while(q--){
		int a, b;
		scanf("%d %d", &a, &b);
		ll nx = x[b-1], ny = y[b-1];
		if(swp[a]) std::swap(nx, ny);
		nx = xk[a] * nx + xt[a];
		ny = yk[a] * ny + yt[a];
		printf("%ld %ld
", nx, ny);
	}
	return 0;
}
