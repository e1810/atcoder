#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; scanf("%d", &n);
	vector<int> a(n);
	int sm = 0;
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		sm += a[i];
	}
	sm /= n;
	for(int i=0; i<n; i++) printf("%d\n", abs(a[i]-sm));
}

