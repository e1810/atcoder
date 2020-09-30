#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int d, g, ans = 0;
	scanf("%d %d", &d, &g);
	g /= 100;
	int p[d], c[d];
	REP(i, 0, d){
		scanf("%d %d", &p[i], &c[i]);
		ans += p[i];
		c[i] /= 100;
	}

	REP(i, 0, (1<<d)-1){
		int cnt = 0, point = 0, maxp = 0;
		REP(j, 0, d){
			if((i>>j)&1){
				cnt += p[j];
				point += (j+1)*p[j] + c[j];
			}else{
				maxp = j+1;
			}
		}
		int nd = (std::max(0, g-point)+maxp-1)/(maxp);
		if(nd<=p[maxp-1]) ans = std::min(ans, cnt+nd);
	}
	printf("%d
", ans);
	return 0;
}
