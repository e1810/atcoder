#include<bits/stdc++.h>
using namespace std;
using T = tuple<string, int, int>;

bool cmp(T x, T y){
	if(get<0>(x) < get<0>(y)) return true;
	else if(get<0>(x) > get<0>(y)) return false;
	return get<1>(x) > get<1>(y);
}

int main(){
	int n; scanf("%d", &n);
	vector<T> sp(n);
	for(int i=0; i<n; i++){
		cin >> get<0>(sp[i]) >> get<1>(sp[i]);
		get<2>(sp[i]) = i+1;
	}
	sort(sp.begin(), sp.end(), cmp);
	//for(int i=0; i<n; i++) cout << get<0>(sp[i]) <<" "<< get<1>(sp[i]) << endl;
	for(int i=0; i<n; i++) printf("%d\n", get<2>(sp[i]));
	return 0;
}
