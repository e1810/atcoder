#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)

int main(){
	int qt;
	scanf("%d", &qt);
	while(qt--){
		int n, m;
		scanf("%d %d", &n, &m);
		int a[n], b[m];
		REP(i, 0, n) scanf("%d", &a[i]);
		REP(i, 0, m) scanf("%d", &b[i]);

		std::vector<int> c;
		for(int x: b){
			if(*std::lower_bound(a, a+n, x)==x) c.push_back(x);
		}

		int lans = 0, rans = 0;
		for(int x: b){
			if(x<0){
				int cnt = std::upper_bound(a, a+n, 0) - std::lower_bound(a, a+n, x-1);
				int tmp = std::upper_bound(b, b+m, x) - std::lower_bound(b, b+m, x-cnt);
				tmp += std::lower_bound(c.begin(), c.end(), x-cnt) - c.begin();
				//printf("cnt: %d, tmp: %d\n", cnt, tmp);
				lans = std::max(lans, tmp);
			}else{
				int cnt = std::upper_bound(a, a+n, x) - std::lower_bound(a, a+n, 0);
				int tmp = std::upper_bound(b, b+m, x+cnt-1) - std::lower_bound(b, b+m, x-1);
				tmp += c.end() - std::lower_bound(c.begin(), c.end(), x+cnt-1);
				//printf("cnt: %d, tmp: %d\n", cnt, tmp);
				rans = std::max(rans, tmp);
			}
			//printf("%d %d\n", lans, rans);
		}
		printf("%d\n", lans + rans);
	}
	return 0;
}

