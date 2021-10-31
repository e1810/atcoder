#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;

int main(){
	int n;
	scanf("%d", &n);
	std::priority_queue<int> que;
	REP(i, 0, n){
		int a;
		scanf("%d", &a);
		que.push(a);
	}

	ll ans = 0;
	REP(i, 0, 20){
		REP(j, 0, 1<<i){
			ll tmp = que.top();
			que.pop();
			ans += tmp * i;
			if(que.empty()) break;
		}
		if(que.empty()) break;
	}
	printf("%ld\n", ans);
	return 0;
}
