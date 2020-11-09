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
	std::string s, t, u;
	std::cin >> s >> t >> u;

	int a[26], b[26], c[26];
	REP(i, 0, 26) a[i] = b[i] = c[i] = 0;
	for(char x: s) a[x-'A']++;
	for(char x: t) b[x-'A']++;
	for(char x: u) c[x-'A']++;
	
	bool ng = false;
	int max = 0, min = 0;
	REP(i, 0, 26){
		if(a[i]+b[i]<c[i]) ng = true;
		else{
			min += std::clamp(c[i]-b[i], 0, c[i]);
			max += std::clamp(a[i], 0, c[i]);
		}
	}
	if(ng) puts("NO");
	else{
		if(min<=s.size()/2 && s.size()/2<=max) puts("YES");
		else puts("NO");
	}
	return 0;
}
