#include<bits/stdc++.h>
using P = std::pair<int,int>;

int main(){
	int n; scanf("%d", &n);
	std::vector<P> a(n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &a[i].first, &a[i].second);
	}
	sort(a.begin(), a.end(), [](P x, P y){return x.second<y.second;});
	for(P p: a){
		printf("%d %d\n", p.first, p.second);
	}
	return 0;
}
