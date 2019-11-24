#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int k;
	cin>> k;
	int l = s.size();

	int i = l>k? k:l;
	int b = 1;
	set<string> cnddt;
	while(i--){
		for(int j=0; j<l-i+1; j++) cnddt.insert(s.substr(j, i+1));
	}
	vector<string> ss(cnddt.begin(), cnddt.end());
	cout << ss[k]<< endl;
	return 0;
}
