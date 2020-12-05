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
	int a[n];
	REP(i, 0, n) scanf("%d", &a[i]);

	int last = -1;
	REP(i, 0, n){
		if(i>a[i]-1){
			if(a[i]-1<last){
				puts("-1");
				return 0;
			}
			last = i;
		}
	}
	last = n;
	for(int i=n-1; i>=0; i--){
		if(i<a[i]-1){
			if(a[i]-1>last){
				puts("-1");
				return 0;
			}
			last = i;
		}
	}

	std::set<int> used;
	std::vector<int> ans;
	int pos[n];
	REP(i, 0, n) pos[a[i]-1] = i;
	REP(i, 0, n){
		if(i<pos[i]){
			for(int j=pos[i]; j>i; j--){
				if(used.count(j)){
					puts("-1");
					return 0;
				}
				used.insert(j);
				ans.push_back(j);
				pos[a[j-1]-1]++;
				std::swap(a[j-1], a[j]);
			}
			pos[i] = i;
		}else{
			for(int j=pos[i]; j<i; j++){
				if(used.count(j+1)){
					puts("-1");
					return 0;
				}
				used.insert(j+1);
				ans.push_back(j+1);
				pos[a[j+1]]--;
				std::swap(a[j], a[j+1]);
			}
		}
	}
	if(used.size()!=n-1) puts("-1");
	else for(int x: ans) printf("%d
", x);
	return 0;
}
