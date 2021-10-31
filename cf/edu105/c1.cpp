#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b;i<e;i++)

int main(){
    int qt;
    scanf("%d", &qt);
    while(qt--){
        int n, m;
        scanf("%d %d", &n, &m);
		
		std::vector<int> ap, an, bp, bn;
		REP(i, 0, n){
			int a;
			scanf("%d", &a);
			if(a>0) ap.push_back(a);
			else an.push_back(-a);
		}
		REP(i, 0, m){
			int b;
			scanf("%d", &b);
			if(b>0) bp.push_back(b);
			else bn.push_back(-b);
		}
		std::reverse(an.begin(), an.end());
		std::reverse(bn.begin(), bn.end());

		std::vector<int> cp, cn;
		for(int x: bp){
			auto itr = std::lower_bound(ap.begin(), ap.end(), x);
			if(itr!=ap.end() && *itr==x) cp.push_back(x);
		}
		for(int x: bn){
			auto itr = std::lower_bound(an.begin(), an.end(), x);
			if(itr!=an.end() && *itr==x) cn.push_back(x);
		}

		int rans = 0, lans = 0;	
		for(int x: bp){
			int precnt = 0, cnt = std::upper_bound(ap.begin(), ap.end(), x) - ap.begin();
			while(int c = std::upper_bound(ap.begin(), ap.end(), x+cnt)
				- std::upper_bound(ap.begin(), ap.end(), x+precnt)){
				precnt = cnt;
				cnt += c;
			}

			int tmp = std::lower_bound(bp.begin(), bp.end(), x+cnt)
				- std::lower_bound(bp.begin(), bp.end(), x);
			tmp += cp.end() - std::upper_bound(cp.begin(), cp.end(), x+cnt);
			rans = std::max(rans, tmp);
			//printf("cnt: %d, tmp: %d\n", cnt, tmp);
		}
			
		for(int x: bn){
			int precnt = 0, cnt = std::upper_bound(an.begin(), an.end(), x) - an.begin();
			while(int c = std::upper_bound(an.begin(), an.end(), x+cnt)
				- std::upper_bound(an.begin(), an.end(), x+precnt)){
				precnt = cnt;
				cnt += c;
			}

			int tmp = std::lower_bound(bn.begin(), bn.end(), x+cnt)
				- std::lower_bound(bn.begin(), bn.end(), x);
			tmp += cn.end() - std::upper_bound(cn.begin(), cn.end(), x+cnt);
			lans = std::max(lans, tmp);
			//printf("cnt: %d, tmp: %d\n", cnt, tmp);
		}

		printf("%d\n", lans + rans);
	}
	return 0;
}
