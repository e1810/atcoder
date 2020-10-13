#include<cstdio>
#include<cstdint>
#include<vector>
#include<queue>
using ll = int_fast64_t;

struct P {
	ll disum, from, now, cnt;
	P(ll a, ll b, ll c, ll d): disum(a), from(b), now(c), cnt(d) {}
};
bool operator<(const P x, const P y){return x.disum<y.disum;}

struct da {
	ll dist=0, sat=0;
	da(ll a, ll b): dist(a), sat(b) {}
};

int main(){
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	ll x[n];
	for(int i=0; i<n; i++) scanf("%ld", &x[i]);

	std::vector<da> links[n];
	for(int i=0; i<m; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		links[a-1].emplace_back(c, b-1);
		links[b-1].emplace_back(c, a-1);
	}


	std::vector<da> ans(n, da(1e18, -1));
	std::priority_queue<P> que;
	que.emplace(0, -1, 0, 1);
	while(!que.empty()){
		P p = que.top(); que.pop();
		if(ans[p.now].dist<p.disum) continue;
		else if(ans[p.now].dist>p.disum){
			ans[p.now].dist = p.disum;
			if(p.from>=0) ans[p.now].sat = ans[p.from].sat;
			if(p.cnt==k) ans[p.now].sat = x[p.now];
		}else{
			ans[p.now].sat = std::max(ans[p.now].sat, ans[p.from].sat);
			if(p.cnt==k) ans[p.now].sat = std::max(ans[p.now].sat, x[p.now]);
		}

		for(da np: links[p.now]){
			if(ans[np.sat].dist>=p.disum+np.dist){
				que.emplace(p.disum+np.dist, p.now, np.sat, p.cnt+1);
			}
		}
	}
	for(int i=0; i<n; i++) printf("%ld %ld  ", ans[i].sat, ans[i].dist); puts("");
	printf("%ld\n", ans[n-1].sat);
	return 0;
}


