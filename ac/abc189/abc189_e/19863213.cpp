#include<bits/stdc++.h>
using ll = int_fast64_t;
struct V {
	ll a, b, c;
	V(): a(0), b(0), c(0) {}
	V(ll a, ll b, ll c): a(a), b(b), c(c) {}
};
struct M {
	ll a, b, c, d, e, f, g, h, i;
	M(): a(0), b(0), c(0), d(0), e(0), f(0), g(0), h(0), i(0) {}
	M(ll a, ll b, ll c, ll d, ll e, ll f, ll g, ll h, ll i):
		a(a), b(b), c(c), d(d), e(e), f(f), g(g), h(h), i(i) {}
	M operator*(M r){
		return M(
			a*r.a + b*r.d + c*r.g,
			a*r.b + b*r.e + c*r.h,
			a*r.c + b*r.f + c*r.i,
			d*r.a + e*r.d + f*r.g,
			d*r.b + e*r.e + f*r.h,
			d*r.c + e*r.f + f*r.i,
			g*r.a + h*r.d + i*r.g,
			g*r.b + h*r.e + i*r.h,
			g*r.c + h*r.f + i*r.i);
	}
	V operator*(V v){
		return V(
			a*v.a + b*v.b + c*v.c,
			d*v.a + e*v.b + f*v.c,
			g*v.a + h*v.b + i*v.c);
	}
};

void printm(M m){
	printf("[%3ld %3ld %3ld]
", m.a, m.b, m.c);
	printf("[%3ld %3ld %3ld]
", m.d, m.e, m.f);
	printf("[%3ld %3ld %3ld]
", m.g, m.h, m.i);
	puts("");
}

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

int main(){
	int n;
	scanf("%d", &n);
	V pt[n];
	REP(i, 0, n){
		scanf("%ld %ld", &pt[i].a, &pt[i].b);
		pt[i].c = 1;
	}

	int m;
	scanf("%d", &m);
	M ops[1+m];
	ops[0] = M(1, 0, 0, 0, 1, 0, 0, 0, 1);
	REP(i, 0, m){
		int t;
		scanf("%d", &t);
		M x;
		if(t==1) x = M(0, 1, 0, -1, 0, 0, 0, 0, 1);
		else if(t==2) x = M(0, -1, 0, 1, 0, 0, 0, 0, 1);
		else{
			ll p;
			scanf("%ld", &p);
			if(t==3) x = M(-1, 0, 2*p, 0, 1, 0, 0, 0, 1);
			else x = M(1, 0, 0, 0, -1, 2*p, 0, 0, 1);
		}
		ops[i+1] = x * ops[i];
	}
	//REP(i, 0, m+1) printm(ops[i]);

	int q;
	scanf("%d", &q);
	while(q--){
		int a, b;
		scanf("%d %d", &a, &b);
		V v = ops[a] * pt[b-1];
		printf("%ld %ld
", v.a, v.b);
	}
	return 0;
}
