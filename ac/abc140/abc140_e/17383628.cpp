#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int n;
	scanf("%d", &n);
	ll p[n], idxs[n];
	REP(i, 0, n){
		scanf("%ld", &p[i]);
		--p[i];
		idxs[p[i]] = i;
	}
	
	int data[n][4];
	REP(i, 0, n){
		data[i][0] = data[i][1] = -1;
		data[i][2] = data[i][3] = n;
	}

	std::set<int> st;
	for(int i=n-1; i>=0; i--){
		auto itr = st.lower_bound(idxs[i]);
		if(itr!=st.begin()){
			--itr;
			data[i][1] = *itr;
			if(itr!=st.begin()){
				--itr;
				data[i][0] = *itr;
				++itr;
			}
			++itr;
		}

		if(itr!=st.end()){
			data[i][2] = *itr;
			if(++itr!=st.end()) data[i][3] = *itr;
			--itr;
		}
		st.insert(idxs[i]);
	}

	ll ans = 0;
	REP(i, 0, n){
		ll x = (data[i][1]-data[i][0]) * (data[i][2]-idxs[i]);
		x += (data[i][3]-data[i][2]) * (idxs[i]-data[i][1]);
		ans += x*(i+1);
	}
	printf("%ld
", ans);
	return 0;
}
