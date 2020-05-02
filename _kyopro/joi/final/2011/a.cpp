#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll h, w, k;
	scanf("%lld %lld %lld", &h, &w, &k);

	ll J[h+2][w+2], O[h+2][w+2], I[h+2][w+2];

	for(ll i=0; i<w+2; i++) J[0][i]=0, O[0][i]=0, I[0][i]=0;
	for(ll i=1; i<=h; i++){
		J[i][0]=0; O[i][0]=0; I[i][0]=0;
		string s; cin>>s;
		for(ll j=1; j<=w; j++){
			if(s[j-1]=='J') J[i][j] = 1, O[i][j] = 0, I[i][j] = 0;
			if(s[j-1]=='O') J[i][j] = 0, O[i][j] = 1, I[i][j] = 0;
			if(s[j-1]=='I') J[i][j] = 0, O[i][j] = 0, I[i][j] = 1;
		}
		J[i][w+1]=0; O[i][w+1]=0; I[i][w+1]=0;
	}
	for(ll i=0; i<w+2; i++) J[h+1][i]=0, O[h+1][i]=0, I[h+1][i]=0;

	for(ll i=1; i<h+2; i++){
		for(ll j=1; j<w+2; j++){
			J[i][j] += J[i][j-1];
			O[i][j] += O[i][j-1];
			I[i][j] += I[i][j-1];
		}
		for(ll j=1; j<w+2; j++){
			J[i][j] += J[i-1][j];
			O[i][j] += O[i-1][j];
			I[i][j] += I[i-1][j];
		}
	}
	//for(ll i=1; i<=h; i++){for(ll j=1; j<=w; j++) printf("%lld ", O[i][j]);puts("");}

	
	for(ll i=0; i<k; i++){
		ll sx, sy, gx, gy;
		scanf("%lld %lld %lld %lld", &sx, &sy, &gx, &gy);

		ll jc, oc, ic;
		jc = J[sx-1][sy-1] - J[sx-1][gy] - J[gx][sy-1] + J[gx][gy];
		oc = O[sx-1][sy-1] - O[sx-1][gy] - O[gx][sy-1] + O[gx][gy];
		ic = I[sx-1][sy-1] - I[sx-1][gy] - I[gx][sy-1] + I[gx][gy];
		printf("%lld %lld %lld\n", jc, oc, ic);
	}

	return 0;
}
