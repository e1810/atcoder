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
	int r, s, p;
	scanf("%d %d %d", &r, &s, &p);
	char t[n+1];
	scanf("%s", t);

	char pre[k];
	REP(i, 0, k) pre[i] = ' ';

	int ans = 0;
	REP(i, 0, n){
		if(pre[i%k]==t[i]){
			pre[i%k] = ' ';
		}else{
			if(t[i]=='r') ans += p;
			if(t[i]=='s') ans += r;
			if(t[i]=='p') ans += s;
			pre[i%k] = t[i];
		}
	}
	printf("%d
", ans);
	return 0;
}
