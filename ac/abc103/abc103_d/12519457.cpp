#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define rep(i,b,e) for(ll i=b; i<e; i++)
#define be(vec) vec.begin(),vec.end()
#define print(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define scan(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

template<typename T>
struct Segtree{
        using F = std::function<T(T,T)>;
        std::vector<T> seg;
        int size=1;
        T unit;
        F func;

        Segtree(int n, const T &u, const F f): unit(u), func(f) {
                while(size<n) size <<= 1;
                seg.assign(2*size-1, unit);
        }

        void update(int idx, const T &x){
                idx += size-1;
                seg[idx] = x;
                while(idx>0){
                        idx = (idx-1) / 2;
                        seg[idx] = func(seg[2*idx+1], seg[2*idx+2]);
                }
        }

        T query(int a, int b, int k=0, int l=0, int r=-1){
                if(r<0) r = size;
                if(b<=l or r<=a) return unit;
                if(a<=l and r<=b) return seg[k];
                return func(query(a,b, 2*k+1, l,(l+r)/2), query(a,b, 2*k+2, (l+r)/2,r));
        }

        T operator[](const int &i) const {return seg[size-1+i];}
};


int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<P> ab(m);
	rep(i, 0, m) scanf("%ld %ld", &ab[i].fi, &ab[i].se);
	std::sort(be(ab), [](P x, P y){return x.se<y.se;});

	int ans = 0;
	Segtree<bool> seg(n, 0, [](bool a, bool b){return a|b;});
	rep(i, 0, m){
		ll a=ab[i].fi-1, b=ab[i].se-1;
		if(!seg.query(a, b)){
			ans++;
			seg.update(b-1, 1);
		}
	}
	printf("%d
", ans);
	return 0;
}
