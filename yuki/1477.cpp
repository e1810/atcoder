#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=(b);i<(e);i++)

int main(){
	int n, m;
	scanf("%d %d", &n, &m);

	int a[n], in[n] = {};
	std::vector<int> links[n];
	REP(i, 0, n) scanf("%d", &a[i]);

	REP(i, 0, m){
		int u, v;
		scanf("%d %d", &u, &v);
		u--, v--;
		if(a[u]<a[v]){
			links[u].push_back(v);
			in[v]++;
		}else if(a[u]>a[v]){
			links[v].push_back(u);
			in[u]++;
		}
	}

	bool on[n] = {};
	int k;
	scanf("%d", &k);
	REP(i, 0, k){
		int b;
		scanf("%d", &b);
		on[b-1] = true;
	}

	std::queue<int> que;
	REP(i, 0, n) if(in[i]==0) que.push(i);

	std::vector<int> ans;
	while(!que.empty()){
		int from = que.front();
		que.pop();

		if(!on[from]){
			for(int to: links[from]){
				if(--in[to]==0) que.push(to);
			}
		}else{
			on[from] = !on[from];
			ans.push_back(from+1);
			for(int to: links[from]){
				on[to] = !on[to];
				if(--in[to]==0) que.push(to);
			}
		}
	}

	bool ok = true;
	REP(i, 0, n) if(on[i]) ok = false;
	if(!ok) puts("-1");
	else{
		printf("%ld\n", ans.size());
		for(int x: ans) printf("%d\n", x);
	}

	return 0;
}
