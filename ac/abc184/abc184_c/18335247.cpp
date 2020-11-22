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
	ll r1, c1, r2, c2;
	scanf("%ld %ld %ld %ld", &r1, &c1, &r2, &c2);

	int ans = 3;
	REP(i, r1-3, r1+4) REP(j, c1-3, c1+4) if(labs(r1-i)+labs(c1-j)<=3) {
		int tmp = 3;
		if(i==r2 and j==c2) tmp = 1;
		else if(labs(i-r2)+labs(j-c2)<=3) tmp = 2;
		else if(i+j==r2+c2 or i-j==r2-c2) tmp = 2;
		else if(((r2-i)&1)==((c2-j)&1)) tmp = 3;
		else tmp = 4;
		if(i==r1 and j==c1) tmp--;
		ans = std::min(ans, tmp);
	}
	printf("%d
", ans);
	return 0;
}
