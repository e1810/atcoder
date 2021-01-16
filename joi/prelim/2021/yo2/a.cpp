#include<cstdio>
#include<cstdint>
#include<set>
using ll = int_fast64_t;

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	char s[n+1];
	scanf("%s", s);

	std::set<int> idxs({-1, n});
	for(int i=0; i<n; i++){
		if(s[i]=='#') idxs.insert(i);
	}

	--k;
	ll ans = 0;
	bool right = true;
	while(idxs.size()>2){
		if(right){
			auto pos = idxs.upper_bound(k);
			ans += *pos - k;
			k = *pos;
			if(k!=n) idxs.erase(pos);
		}else{
			auto pos = idxs.lower_bound(k);
			--pos;
			ans += k - *pos;
			k = *pos;
			if(k!=-1) idxs.erase(pos);
		}
		right ^= 1;
	}
	printf("%ld\n", ans);
	return 0;
}

