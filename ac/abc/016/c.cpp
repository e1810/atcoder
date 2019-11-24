#include<bits/stdc++.h>
using namespace std;

bool binsear(vector<int> arr, int x){
	if(arr.size()==0) return false;
	int low = 0, high = arr.size();
	while(high-low>1){
		int mid = (low+high)/2;
		if(mid<0 || mid>=arr.size()) return false;
		if(arr.at(mid)>x) high = mid;
		else low = mid;
	}
	return arr.at(low)==x;
}


int main(){
	int n, m;
	scanf("%d %d", &n, &m);

	vector<vector<int>> frnd(n);
	for(int i=0; i<m; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		frnd[a-1].push_back(b-1);
		frnd[b-1].push_back(a-1);
	}

	for(int i=0; i<n; i++){
		int ans = 0;
		sort(frnd[i].begin(), frnd[i].end());
		vector<int> frfr(0);
		for(int f: frnd[i]){
			for(int ff:frnd[f]){
				if(ff!=i && !binsear(frnd[i], ff) && !binsear(frfr, ff)){
					frfr.push_back(ff);
					sort(frfr.begin(), frfr.end());
				}
			}
		}
		cout << frfr.size() << endl;
	}
	return 0;
}

