#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)
using ll = int_fast64_t;
const ll MOD = 1e9+7;

int main(){
	int n;
	scanf("%d", &n);

	char s[n+1], t[n+1];
	scanf("%s %s", s, t);

	ll alp[26] = {};
	alp[s[0]-'a'] = 1;
	REP(i, 1, n-1){
		alp[s[i]-'a'] += alp[t[i]-'a'];
		alp[s[i]-'a'] %= MOD;
	}

	printf("%ld\n", alp[t[n-1]-'a']);
	return 0;
}
