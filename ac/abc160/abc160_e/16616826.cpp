#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
template<typename T> using pq = std::priority_queue<T>;
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
	int x, y, a, b, c;
	scanf("%d %d %d %d %d", &x, &y, &a, &b, &c);
	ll p, q, r;
	pq<P> que;
	REP(i, 0, a){
	    scanf("%ld", &p);
	    que.emplace(p, 0);
	}
	REP(i, 0, b){
	    scanf("%ld", &q);
	    que.emplace(q, 1);
	}
	REP(i, 0, c){
	    scanf("%ld", &r);
	    que.emplace(r, 2);
	}

	ll non = 0, ans = 0;
	while(!que.empty() && non<x+y){
	    auto [v, t] = que.top();
	    que.pop();
	    if(t==0 && x) x--;
	    else if(t==1 && y) y--;
	    else if(t==2 && non<x+y) non++;
	    else continue;
	    ans += v;
	}
	printf("%ld
", ans);
	return 0;
}
