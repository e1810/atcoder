#include<bits/stdc++.h>
using namespace std;

int main(){
	int h, w;
	scanf("%d %d", &h, &w);

	vector<string> flg(h);
	for(int i=0; i<h; i++) cin>>flg[i];

	int wbr[h][3] = {0};
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			if(flg[i][j]=='W')wbr[i][0]++;
			if(flg[i][j]=='B')wbr[i][1]++;
			if(flg[i][j]=='R')wbr[i][2]++;
		}
	}
	for(int i=1; i<h; i++)for(int j=0; j<3; j++) wbr[i][j]+=wbr[i-1][j];

	int ans = 1e9;
	for(int i=0; i<h-2; i++){
		for(int j=i+1; j<h-1; j++){
			int white = wbr[i][0], blue = wbr[j][1]-wbr[i][1], red = wbr[h-1][2]-wbr[j][2];
			ans = min(ans, h*w - white - blue - red);
		}
	}
	printf("%d\n", ans);
	return 0;
}
