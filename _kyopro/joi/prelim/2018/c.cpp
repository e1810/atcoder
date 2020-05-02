#include<bits/stdc++.h>
using namespace std;

int main(){
	int h, w;
	scanf("%d %d", &h, &w);
	int wei[h][w], bai[h][w];
	for(int i=0; i<h; i++) for(int j=0; j<w; j++) scanf("%d", &wei[i][j]);

	int mn = 1e8;
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){

			for(int k=0; k<h; k++) for(int l=0; l<w; l++) bai[k][l]=1e8;
			for(int k=0; k<h; k++) for(int l=0; l<w; l++) bai[k][l]=min(bai[k][l], abs(k-i));
			for(int k=0; k<h; k++) for(int l=0; l<w; l++) bai[k][l]=min(bai[k][l], abs(l-j));
			
			int sm = 0;
			for(int k=0; k<h; k++){
				for(int l=0; l<w; l++){
					sm += wei[k][l] * bai[k][l];
				}
			}
			mn = min(mn, sm);
		}
	}
	printf("%d\n", mn);
	return 0;
}
