#include<bits/stdc++.h>
using ll = int_fast64_t;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}

const int MOD = 1e9+7;

int main(){
	int n;
	scanf("%d", &n);
	char s[n+1], t[n+1];
	scanf("%s %s", s, t);

	std::vector<int> a;
	REP(i, 0, n){
		if(s[i]==t[i]) a.push_back(1);
		else{
			a.push_back(2);
			i++;
		}
	}

	ll ans = 3, prev = 0;
	for(int x: a){
		if(x==2){
			if(prev==2) ans *= 3;
			else ans *= 2;
		}else{
			if(prev==1) ans *= 2;
		}
		ans %= MOD;
		prev = x;
	}
	printf("%ld
", ans);
	return 0;
}
