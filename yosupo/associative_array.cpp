#include<cstdio>
#include<cstdint>
#include<map>
using ll = int_fast64_t;

int main(){
	int q;
	scanf("%d", &q);
	std::map<ll,ll> mp;
	while(q--){
		int t;
		scanf("%d", &t);
		if(t==0){
			ll k, v;
			scanf("%ld %ld", &k, &v);
			mp[k] = v;
		}else{
			ll k;
			scanf("%ld", &k);
			printf("%ld\n", mp[k]);
		}
	}
	return 0;
}

