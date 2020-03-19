#include<bits/stdc++.h>
#define pairing(a, b) make_pair(a, b)
using namespace std;
typedef long long ll;
typedef pair<ll, pair<ll,ll>> torio;

const ll INF = 1000000000;
ll dx[4] = {0, 1, 0, -1};
ll dy[4] = {1, 0, -1, 0};

int main(){
	ll h, w;
	scanf("%lld %lld", &h, &w);
	ll fig[h][w], ans[h][w];
	for(ll i=0; i<h; i++){
		string s;
		cin>>s;
		for(ll j=0; j<w; j++){
			if(s[j]=='.') fig[i][j] = 1, ans[i][j]=INF;
			else fig[i][j] = 0, ans[i][j]=0;
		}
	}

	ll q;
	scanf("%lld", &q);
	torio txy[q];
	for(ll i=0; i<q; i++) scanf("%lld %lld %lld", &txy[i].first, &txy[i].second.first, &txy[i].second.second);
	for(ll i=0; i<q; i++) txy[i].second.first--, txy[i].second.second--;
	
	sort(txy, txy+q);
	for(ll i=0; i<q; i++){
		queue<torio> que; que.push(txy[i]);
		while(!que.empty()){
			torio tmp = que.front(); que.pop();
			ll t=tmp.first, x=tmp.second.first, y=tmp.second.second;
			//printf("(%lld %lld) ", x, y);
			ans[x][y] = min(ans[x][y], t);
			fig[x][y] = 2;
			for(ll j=0; j<4; j++){
				if(0<=x+dx[j] && x+dx[j]<h and 0<=y+dy[j] && y+dy[j]<w){
					if(fig[x+dx[j]][y+dy[j]]==1){
						que.push(pairing(t+1, pairing(x+dx[j],y+dy[j])));
					}
				}
			}
		}
	}

	ll y = 0;
	for(ll i=0; i<h; i++) for(ll j=0; j<w; j++) y = max(y, ans[i][j]);
	if(y==INF) puts("Impossible");
	else printf("%lld\n", y);

	return 0;
}

