#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
const long double PI = 3.14159265358979323846;
struct Pt{
	ll x, y;
	bool operator==(Pt other){
		return (x==other.x and y==other.y);
	}
};

int main(){
	ll n; scanf("%lld", &n);
	vector<Pt> pts(n);
	for(ll i=0; i<n; i++) scanf("%lld %lld", &pts[i].x, &pts[i].y);

	
	vector<Pt> totuho(0);
	Pt prev = {0, 0}, minpt;
	ld mindeg = 90*PI;

	while(1){
		for(ll i=0; i<n; i++){
			ld tdeg;
			if(pts[i].x-prev.x) tdeg = atan((pts[i].y-prev.y)/(pts[i].x-prev.x));
			else tdeg = 360*PI;

			if(tdeg <= mindeg){
				minpt = pts[i];
				mindeg = tdeg;
			}
		}
		if(totuho.size() and minpt==totuho[0]) break;
		else totuho.push_back(minpt);
		for(Pt pt: totuho) printf("%lld,%lld ", pt.x, pt.y);puts("");
		prev = minpt;
	}
	return 0;
}
