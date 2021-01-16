#include<iostream>

int main(){
	int h, w;
	scanf("%d %d", &h, &w);
	char flag[h][w+1];
	for(int i=0; i<h; i++) scanf("%s", flag[i]);

	int alp[26][15][15] = {};
	for(int i=0; i<h; i++) for(int j=0; j<w; j++) {
		alp[flag[i][j]-'A'][i+1][j+1]++;
	}
	for(int c=0; c<26; c++){
		for(int i=0; i<h; i++) for(int j=0; j<=w; j++) {
			alp[c][i+1][j] += alp[c][i][j];
		}
		for(int i=0; i<=h; i++) for(int j=0; j<w; j++) {
			alp[c][i][j+1] += alp[c][i][j];
		}
	}

	/*for(int c=0; c<26; c++){
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++) printf("%d ", alp[c][i][j]); puts("");
		}
		puts("");
	}*/


	int ans = h * w;
	for(int i=0; i<h-2; i++) for(int j=i+1; j<h-1; j++) {
		int max = 0;
		for(int c1=0; c1<26; c1++){
			for(int c2=0; c2<26; c2++) if(c1!=c2) {
				for(int c3=0; c3<26; c3++) if(c1!=c3 && c2!=c3) {
					max = std::max(max,
						alp[c1][i+1][w]
						+ alp[c2][j+1][w] - alp[c2][i+1][w]
						+ alp[c3][h][w] - alp[c3][j+1][w]
					);
				}
			}
		}
		ans = std::min(ans, h * w - max);
	}
	printf("%d\n", ans);
	return 0;
}




