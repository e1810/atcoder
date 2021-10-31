#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;

std::vector<int> links[100000], visit;
int in[100000], out[100000], from[100000];
ll cnt[100001];
bool used[100000];

void eular_tour(int v=0){
	if(used[v]) return;
	used[v] = true;
	in[v] = visit.size();
	visit.push_back(v);
	for(auto to: links[v]){
		if(!used[to]){
			from[to] = v;
			eular_tour(to);
		}
	}
	out[v] = visit.size();
}

int main(){
	ll n;
	scanf("%ld", &n);
	REP(i, 0, n-1){
		int a, b;
		scanf("%d %d", &a, &b);
		links[a-1].push_back(b-1);
		links[b-1].push_back(a-1);
	}

	eular_tour();
	REP(i, 0, n) cnt[i] = out[i] - in[i];

	ll ans = 0;
	REP(i, 0, n){
		ans += n;
		for(auto x: links[i]){
			if(from[i]!=x) ans += cnt[x] * (n - cnt[x]);
			else ans += cnt[i] * (n - cnt[i]);
		}
	}
	printf("%ld\n", ans);
	return 0;
}
