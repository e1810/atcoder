#include<cstdio>
#include<cstdint>
#include<vector>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b;i<e;i++)

ll n, k[110], q, ti[110], a[110];
std::vector<ll> t[110], s[110];

ll bisearch(ll eff, ll mess){
	ll l=0, r=1e9;
	while(r-l>1){
		ll mid = (r-l)/2 + l;
		ll clean = eff*mid + (mid-1)*mid/2;
		if(clean >= mess) r = mid;
		else l = mid;
	}
	return r;
}

ll step1(ll bi){
	ll ret = 0;
	REP(i, 0, n){
		ll min = 1e18;
		if(a[i]-bi <= 0) min = 0;
		REP(j, 0, k[i]){
			ll tmp = t[i][j];
			tmp += bisearch(s[i][j], a[i]-bi);
			if(min > tmp) min = tmp;
		}
		ret += min;
	}
	return ret;
}

void step2(){
	scanf("%ld", &q);
	REP(i, 0, q) scanf("%ld", &ti[i]);
	REP(qt, 0, q) printf("%ld\n", step1(ti[qt]));
}

void step3(){
	scanf("%ld", &q);
	REP(i, 0, q) scanf("%ld", &ti[i]);

	REP(qt, 0, q){
		ll l=-1, r=1e18;
		while(r-l>1){
			ll mess = (r-l)/2 + l;
			ll time = step1(mess);
			if(time <= ti[qt]) r = mess;
			else l = mess;
		}
		printf("%ld\n", r);
	}
}


int main(){
	int step;
	scanf("%d", &step);
	scanf("%ld", &n);
	REP(i, 0, n) scanf("%ld", &a[i]);
	REP(i, 0, n){
		scanf("%ld", &k[i]);
		REP(j, 0, k[i]){
			ll tt, ts;
			scanf("%ld %ld", &tt, &ts);
			t[i].push_back(tt);
			s[i].push_back(ts);
		}
	}
	if(step==1) printf("%ld\n", step1(0));
	else if(step==2) step2();
	else step3();
	return 0;
}
