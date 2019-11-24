#include<bits/stdc++.h>
using namespace std;

vector<string> readd(int n, vector<string> abc){
	//for(int i=0; i<abc.size(); i++) cout<<abc[i]<<endl;
	if(n==1) return abc;
	vector<string> abcNew(0);
	for(string s: abc){
		abcNew.push_back(s+"a");
		abcNew.push_back(s+"b");
		abcNew.push_back(s+"c");
	}
	abc = readd(n-1, abcNew);
	return abc;
}


int main(){
	int n;
	scanf("%d", &n);
	vector<string> ans = readd(n, {"a", "b", "c"});
	for(string s: ans) cout << s << endl;
	return 0;
}
		
