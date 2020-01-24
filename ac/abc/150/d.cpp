#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd_impl(ll n, ll m){
        for(ll i=0; i<10; ++i) {
                ll t = n-m;
                bool q = m>t;
                n = q? m:t;
                m = q? t:m;
                if(m == 0) return n;
        }
        return gcd_impl(m, n%m);
}

ll gcd(ll n, ll m){
        return n>m? gcd_impl(n, m):gcd_impl(m, n);
}

ll lcm(ll n, ll m){
	if(n==0 or m==0) return m;
	return (n*m) / gcd(n, m);
}

int main(){
	ll n, m; scanf("%lld %lld", &n, &m);
	vector<ll> a(n);
	for(ll i=0; i<n; i++) scanf("%lld", &a[i]);
	
	ll g = 0;
	for(ll i: a){
		g = lcm(g, i/2);
	}

	printf("%lld\n", ll((m/(double)g) / 2.0 + 0.5));
	return 0;
}
