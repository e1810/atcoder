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
	std::map<int,int> mp;
	REP(i, 0, n){
		int tmp;
		scanf("%d", &tmp);
		mp[tmp]++;
	}

	if(mp.size()==1){
		if(mp.count(0)) puts("Yes");
		else puts("No");
	}else if(mp.size()==2){
		int k[2], v[2], pos=0;
		for(auto [kt,vt]: mp){
			k[pos] = kt;
			v[pos] = vt;
			pos++;
		}
		if(k[0]==0 && v[0]==n/3 && v[1]==n/3*2){
			puts("Yes");
		}else puts("No");
	}else{
		if(n%3) puts("No");
		else{
			if(mp.size()!=3) puts("No");
			else{
				int xr = 0;
				for(auto [k,v]: mp){
					xr ^= k;
					if(v!=n/3){
						puts("No");
						return 0;
					}
				}
				if(xr==0) puts("Yes");
				else puts("No");
			}
		}
	}
	return 0;
}
