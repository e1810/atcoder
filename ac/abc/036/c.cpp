#include<bits/stdc++.h>
using P = std::pair<int,int>;

int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n);
	std::map<int, int> prs;
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		prs[a[i]]++;
	}
	
	int i=0;
	for(auto &p: prs) p.second = i++;
	
	for(int i: a) printf("%d\n", prs[i]);
	return 0;
}
	
	
		
