#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	std::vector<int> a(n);
	REP(i, 0, n) scanf("%d", &a[i]);
	std::vector<int> b(a);
	std::sort(b.begin(), b.end());

	int sum = 0;
	std::multiset<int> st;
	REP(i, 0, k){
		sum += b[n-1-i];
		st.insert(b[n-1-i]);
	}

	std::vector<int> ans;
	int cnt = 0;
	REP(i, 0, n){
		cnt++;
		if(st.count(a[i])){
			ans.push_back(cnt);
			cnt = 0;
			st.erase(st.find(a[i]));
			if(st.empty()){
				ans.back() += n-i-1;
				break;
			}
		}
	}
	
	printf("%d\n", sum);
	REP(i, 0, k) printf("%d ", ans[i]); puts("");
	return 0;
}



