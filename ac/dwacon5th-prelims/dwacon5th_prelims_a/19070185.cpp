#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int n;
	scanf("%d", &n);
	int a[n], sum = 0;
	REP(i, 0, n){
		scanf("%d", &a[i]);
		sum += a[i];
	}
	
	int ans = 0;
	REP(i, 0, n){
		if(abs(a[ans]*n-sum)>abs(a[i]*n-sum)){
			ans = i;
		}
	}
	printf("%d
", ans);
	return 0;
}
