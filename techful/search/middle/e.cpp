#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)
using ll = int_fast64_t;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int a[m];
	REP(i, 0, m) scanf("%d", &a[i]);

	int max = 0;
	std::vector<int> ans;
	REP(i, 0, 1<<m){
		int sum = 0;
		std::vector<int> tmp;
		REP(j, 0, m) if((i>>j)&1) {
			sum += a[j];
			tmp.push_back(j+1);
		}
		if(sum <= n && max < sum){
			ans = tmp;
			max = sum;
		}
	}

	REP(i, 0, ans.size()){
		printf("%d", ans[i]);
		if(i==ans.size()-1) putchar('\n');
		else putchar(' ');
	}
	return 0;
}

