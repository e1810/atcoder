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
	char s[n+1];
	scanf("%s", s);

	std::vector<char> st;
	REP(i, 0, n){
		st.push_back(s[i]);
		int l = st.size();
		if(st[l-3]=='f' && st[l-2]=='o' && st[l-1]=='x'){
			st.pop_back();
			st.pop_back();
			st.pop_back();
		}
	}
	printf("%ld
", st.size());
	return 0;
}
