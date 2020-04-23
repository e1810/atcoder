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
	int n, q;
	scanf("%d", &n);
	std::vector<Segtree<ll>> seg(26, Segtree<ll>(n, 0, [](ll a, ll b){return a+b;}));
	char s[n];
	getchar();
	rep(i, 0, n){
		s[i] = getchar();
		seg[s[i]-'a'].update(i, 1);
	}
	getchar();
	scanf("%d", &q);
	while(q--){
		int t;
		scanf("%d", &t);
		if(t==1){
			int i;
			char c;
			scanf("%d %c", &i, &c);
			seg[s[i-1]-'a'].update(i-1, 0);
			seg[c-'a'].update(i-1, 1);
			s[i-1] = c;
		}else{
			int l, r;
			scanf("%d %d", &l, &r);
			ll ans = 0;
			rep(i, 0, 26) ans += (seg[i].query(l-1, r) > 0);
			printf("%ld
", ans);
		}
	}
	return 0;
}
