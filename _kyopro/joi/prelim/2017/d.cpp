#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll h, w;
	scanf("%lld %lld", &h, &w);

	ll fig[h+2][w+2], x[h*w+1], y[h*w+1];
	for(int j=0; j<w; j++) fig[0][j]=0, fig[h+1][j]=1e11;
	for(int i=0; i<h; i++) fig[i][0]=0, fig[i][w+1]=1e11;

	for(int i=1; i<=h; i++){
		for(int j=1; j<=w; j++){
			ll tmp;
			scanf("%lld", &tmp);
			fig[i][j] = tmp;
			x[tmp] = i, y[tmp] = j;
		}
	}

	ll ans = 0, chgeIn[h+2][w+2];
	for(int i=0; i<h+2; i++)for(int j=0; j<w+2; j++)chgeIn[i][j]=0;

	ll dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
	for(int i=1; i<=h*w; i++){
		for(int j=0; j<4; j++){
			ll tx = x[i] + dx[j], ty = y[i] + dy[j];
			if(fig[tx][ty]<fig[x[i]][y[i]]){
				if(chgeIn[tx][ty]==0)continue;
				if(chgeIn[x[i]][y[i]]!=0 and chgeIn[x[i]][y[i]]!=chgeIn[tx][ty]){
					chgeIn[x[i]][y[i]] = -1;
				}else{
					chgeIn[x[i]][y[i]] = chgeIn[tx][ty];
				}
			}
		}
		if(chgeIn[x[i]][y[i]]==0) chgeIn[x[i]][y[i]] = i;
		else if(chgeIn[x[i]][y[i]]==-1) ans++;
	}

	//for(int i=0; i<h; i++){for(int j=0; j<w; j++)printf("%lld ", chgeIn[i+1][j+1]);puts("");}
	printf("%lld\n", ans);
	return 0;
}


