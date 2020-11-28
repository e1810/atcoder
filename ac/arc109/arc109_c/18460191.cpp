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
	std::string s;
	std::cin >> s;

	std::string ss[k+1];
	ss[0] = s;

	REP(i, 0, k){
		ss[i] += ss[i];
		std::string nx;
		REP(j, 0, n){
			if(ss[i][2*j]=='R'){
				if(ss[i][2*j+1]=='P') nx += 'P';
				else nx += 'R';
			}else if(ss[i][2*j]=='S'){
				if(ss[i][2*j+1]=='R') nx += 'R';
				else nx += 'S';
			}else{
				if(ss[i][2*j+1]=='S') nx += 'S';
				else nx += 'P';
			}
		}
		ss[i+1] = nx;
	}
	printf("%c
", ss[k][0]);
	return 0;
}
