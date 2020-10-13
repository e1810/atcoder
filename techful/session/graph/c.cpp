#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)

int main(){
	int r, b, g;
	scanf("%d %d %d", &r, &b, &g);
	int x, s;
	scanf("%d %d", &x, &s);
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	int ans = 1e9;
	REP(i, 0, 10000){
		int tmp = s * i;
		tmp += std::max(0, A - x*i) * r;
		tmp += std::max(0, B - x*i) * b;
		tmp += std::max(0, C - x*i) * g;
		ans = std::min(ans, tmp);
	}

	printf("%d\n", ans);
	return 0;
}
