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
	int n, k;
	scanf("%d %d", &n, &k);
	char s[n+1];
	scanf("%s", s);

	int cnt = 0, sum = 0;
	char prev = s[0];
	REP(i, 0, n){
		if(prev==s[i]) cnt++;
		else{
			sum += cnt-1;
			cnt = 1;
		}
		prev = s[i];
	}
	sum += cnt-1;
	printf("%d
", std::min(n-1, sum+2*k));
	return 0;
}
