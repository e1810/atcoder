#include<bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> P;

int main(){
	long long n, m, t;
	cin >> n >> m >> t;
	vector<long long> l(n);
	for(int i=0; i<n; i++) cin >> l[i];

	vector<vector<P>> go(n);
	vector<vector<P>> back(n);
	for(int i=0; i<m; i++){
		int a, b, c;
		cin >> a >> b >> c;
		go[a-1].push_back(P(b-1, c));
		back[b-1].push_back(P(a-1, c));
	}

	vector<long long> goDist(n);
	for(int i=0; i<n; i++) goDist[i]=1e11;
	goDist[0] = 0;
	priority_queue<P, vector<P>, greater<P>> candidates;
	candidates.push(P(0,0));

	while(!candidates.empty()){
		P c = candidates.top();
		candidates.pop();
		long long v = c.first;
		long long cost = c.second;
		for(P edge: go[v]){
			long long  vNx = edge.first;
			long long costNx = edge.second;
			if(goDist[vNx] <= goDist[v]+costNx) continue;
			goDist[vNx] = goDist[v]+costNx;
			candidates.push(edge);
		}
	}

	vector<long long> backDist(n);
	for(int i=0; i<n; i++) backDist[i] = 1e11;
	backDist[0] = 0;
	candidates.push(P(0,0));

	while(!candidates.empty()){
		P c = candidates.top();
		candidates.pop();
		long long v = c.first;
		long long cost = c.second;
		for(P edge: back[v]){
			long long vNx = edge.first;
			long long costNx = edge.second;
			if(backDist[vNx] <= backDist[v]+costNx) continue;
			backDist[vNx] = backDist[v]+costNx;
			candidates.push(edge);
		}
	}
	
	long long ans = 0;
	for(int i=0; i<n; i++){
		long long earn = l[i] * (t - goDist[i] - backDist[i]);
		ans = max(ans, earn);
	}
	cout << ans << endl;
}
