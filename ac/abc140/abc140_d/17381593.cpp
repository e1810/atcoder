#include<cstdio>
#include<algorithm>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	char s[n+1];
	scanf("%s", s);

	int ans = 0;
	REP(i, 1, n){
		if(s[i-1]==s[i]) ans++;
	}
	printf("%d
", std::min(n-1, ans+2*k));
	return 0;
}
