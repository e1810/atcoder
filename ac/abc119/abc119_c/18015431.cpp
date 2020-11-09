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
	int n, a, b, c;
	scanf("%d %d %d %d", &n, &a, &b, &c);
	int l[n];
	REP(i, 0, n) scanf("%d", &l[i]);

	int bits = 1;
	REP(i, 0, n) bits *= 4;

	int ans = 1e9;
	REP(i, 0, bits){
		int I = i, A = 0, B = 0, C = 0;
		int tmp = -30;
		REP(j, 0, n){
			if(I%4==0) A += l[j];
			if(I%4==1) B += l[j];
			if(I%4==2) C += l[j];
			if(I%4!=3) tmp += 10;
			I /= 4;
		}
		if(A==0 or B==0 or C==0) continue;
		tmp += abs(A-a) + abs(B-b) + abs(C-c);
		ans = std::min(ans, tmp);
		if(tmp==3) printf("%d %d %d
", A, B, C);
	}
	printf("%d
", ans);
	return 0;
}
