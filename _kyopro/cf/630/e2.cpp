#include<bits/stdc++.h>
using P = std::pair<int,int>;

int main(){
        int qq;
        scanf("%d", &qq);
        for(int qqq=0; qqq<qq; qqq++){
                int n;
                scanf("%d", &n);
                std::map<int,int> b[n+1];

                for(int i=0; i<n; i++){
                        int tmp;
                        scanf("%d", &tmp);
                        b[i+1][tmp-1]++;
                }
                for(int i=0; i<n; i++) for(auto [f, s]: b[i]) b[i+1][f] += s;
		if(n==1){
			puts("1");
			continue;
		}
	
		int ans = 0;
		for(int i=0; i<=n; i++){
			for(auto [k, c]: b[i]){
				int l=i, r=n+1, x=c;
				while(r-l>1){
					int mid = (l+r)/2;
					if(b[n][k]-b[mid][k]<c) r = mid;
					else l = mid;
				}
				if(b[n][k]-b[l][k]!=c) x = 0;
				
				int j = l, y = 0;
				for(int kk=0; kk<200; kk++){
					y = std::max(y, b[j][kk]-b[i][kk]);
				}
				ans = std::max(ans, y + x*2);
			}
		}
		
		printf("%d\n", ans);
	}
	return 0;
}
