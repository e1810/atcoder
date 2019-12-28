#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<char, ll> P;

int main(){
	string s;
	cin>>s;
	
	char prev = s[0];
	ll cnt = 0;
	vector<P> joi(0);
	for(ll i=0; i<s.size(); i++){
		if(prev==s[i]){
			cnt++;
		}else{
			joi.push_back(make_pair(prev, cnt));
			cnt = 1;
		}
		prev = s[i];
	}
	joi.push_back(make_pair(prev, cnt));

	ll lev = 0;
	for(ll i=1; i<joi.size()-1; i++){
		if(joi[i-1].first=='J' && joi[i].first=='O' && joi[i+1].first=='I'){
			if(joi[i-1].second>=joi[i].second && joi[i].second<=joi[i+1].second){
				lev = max(lev, joi[i].second);
			}
		}
	}
	printf("%lld\n", lev);

	return 0;
}
