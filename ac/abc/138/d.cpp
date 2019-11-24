#include<bits/stdc++.h>
using namespace std;

int main(){
	long n, q;
	scanf("%ld %ld", &n, &q);
	vector<vector<long>> link(n);
	for(long i=0; i<n-1; i++){
		long a, b;
		scanf("%ld %ld", &a, &b);
		link[a-1].push_back(b-1);
		link[b-1].push_back(a-1);
	}

	vector<long> weight(n);
	for(long w: weight) w=0;
	vector<bool> used(n);
	for(bool u: used) u=false;

	for(int i=0; i<q; i++){
		long p, x;
		scanf("%ld %ld", &p, &x);
		weight[p-1] += x;
	}

	queue<long> que;
	que.push(0);
	while(!que.empty()){
		long m = que.front();
		que.pop();
		
		used[m] = true;
		for(long v:link[m]){
			if(!used[v]){
				weight[v] += weight[m];
				que.push(v);
			}
		}
	}


	for(long i=0; i<n; i++) printf("%ld\n", weight[i]);

	return 0;
}
