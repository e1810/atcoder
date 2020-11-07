#include<bits/stdc++.h>
using namespace std;
int n,a;
string s;
map<string, int> mp;
int main(){
	scanf("%d", &n);
	while(n--){cin >> s;mp[s]++;}
	scanf("%d", &n);
	while(n--){cin >> s;mp[s]--;}
	for(auto p:mp) a = max(a,p.second);
	cout << a << '
';
	return 0;
}
