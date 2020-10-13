#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	std::multiset<int> mst;
	for(int i=0; i<(1<<n); i++){
		int a;
		scanf("%d", &a);
		mst.insert(a);
	}

	std::queue<std::pair<int,int>> que;
	auto itr = mst.end();
	--itr;
	que.emplace(n, *itr);
	mst.erase(itr);

	int cnt = 0;
	while(!que.empty()){
		auto [stair, pare] = que.front();
		que.pop();
		
		auto itr = mst.lower_bound(pare);
		if(itr==mst.begin()){
			puts("No");
			return 0;
		}
		--itr;
		int child = *itr;
		mst.erase(itr);
		if(stair>1) que.emplace(stair-1, pare);
		if(stair>1) que.emplace(stair-1, child);
	};

	puts("Yes");
	return 0;
}
