#include<bits/stdc++.h>
using Pt = std::tuple<int,int,int>;

int main(){
	std::set<Pt> pts[101];
	pts[0].insert(Pt(0,0,0));
	for(int i=0; i<101; i++){
		for(auto [t, g, pg]: pts[i]){
			if(i+5<101) pts[i+5].insert(Pt(t+1, g, pg));
			if(i+7<101) pts[i+7].insert(Pt(t+1, g+1, pg));
			if(i+3<101) pts[i+3].insert(Pt(t, g, pg+1));
		}
	}

	int n;
	scanf("%d", &n);
	printf("%ld\n", pts[n].size());
	return 0;
}
	
	
