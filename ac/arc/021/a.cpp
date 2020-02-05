#include<bits/stdc++.h>

int mp[6][6];
int main(){
	for(int i=0; i<16; i++) scanf("%d", &mp[1+i/4][1+i%4]);

	int dx[]={1,0,-1,0}, dy[]={0,1,0,-1}, ans = 0;
	for(int i=1; i<5; i++){
		for(int j=1; j<5; j++){
			for(int k=0; k<4; k++){
				ans |= (mp[i][j]==mp[i+dx[k]][j+dy[k]]);
			}
		}
	}
	if(ans) puts("CONTINUE");
	else puts("GAMEOVER");
	return 0;
}

