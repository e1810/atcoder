
#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define rep(i,b,e) for(ll i=b; i<e; i++)
#define be(vec) vec.begin(),vec.end()
#define print(vec) for(auto &i:vec)fprintf(stderr,"%ld ",i);puts("");
#define scan(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

struct UnionFind {
        using ll = int_fast64_t;
        std::vector<ll> data;

        UnionFind(ll size): data(size){
                for(ll i=0; i<size; i++) data[i] = -1;
        }

        ll root(ll x){
                if(data[x]<0) return x;
                return data[x] = root(data[x]);
        }

        void unite(ll x, ll y){
                x = root(x);
                y = root(y);
                if(x==y) return;

                if(data[x]<data[y]){
                        data[x] += data[y];
                        data[y] = x;
                }else{
                        data[y] += data[x];
                        data[x] = y;
                }
        }

        bool find(ll x, ll y){
                return root(x)==root(y);
        }
};

int main(){
	ll n, m;
	scanf("%ld %ld", &n, &m);
	V a(n);
	scan(a);
	
	UnionFind uf(n*2);
	rep(i, 0, n) uf.unite(i, n+a[i]-1);
	rep(i, 0, m){
		ll x, y;
		scanf("%ld %ld", &x, &y);
		uf.unite(x-1, y-1);
	}
	ll ans = 0;
	rep(i, 0, n){
		if(uf.find(i, n+i)) ans++;
	}
	printf("%ld
", ans);
	return 0;
}
