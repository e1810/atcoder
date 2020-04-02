#include<bits/stdc++.h>
using ll = int_fast64_t;

int main(){
	int qq; scanf("%d", &qq);
	while(qq--){
		int n;
		scanf("%d", &n);
		std::string s;
		std::cin >> s;

		int ans = 0;
		for(ll i=0; i<(1<<(n/2)); i++){
			std::map<std::string, int> mp;
			int cnt = 1, mid = -1;
			bool can = true;
			for(int j=0; j<n/2; j++){
				if((i>>j)&1){
					std::string t1 = s.substr(j+1-cnt, cnt);
					std::string t2 = s.substr(n-j-1, cnt);
					if(t1==t2 or mp[t1]>0 or mp[t2]>0){
						can = false;
						break;
					}else mp[t1] = mp[t2] = 1;
					cnt = 1;
					mid = j;
				}else cnt++;
			}
			
			if(mid*2!=n){ 
				std::string t = s.substr(mid+1, n-(mid+1)*2);
				if(mp[t]>0) can=false;
				else mp[t] = 1;
			}

			if(can){
				//for(auto p: mp) std::cout << p.first << ":" << p.second << " ";
				//printf("%b %d\n", __builtin_popcount(i), __builtin_popcount(i));
				ans = std::max(ans, __builtin_popcount(i)*2 - (n%2==0 and mid==n/2-1));
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
			
