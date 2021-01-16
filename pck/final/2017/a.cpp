#include<cstdio>

int main(){
	int w, h;
	char c;
	scanf("%d %d %c", &w, &h, &c);
	
	char ans[h][w+1];
	for(int i=0; i<h; i++) for(int j=0; j<w; j++) ans[i][j] = '.';
	for(int i=0; i<w; i++) ans[0][i] = ans[h-1][i] = '-';
	for(int i=0; i<h; i++){
		ans[i][0] = ans[i][w-1] = '|';
		ans[i][w] = '\0';
	}
	ans[0][0] = ans[h-1][0] = ans[0][w-1] = ans[h-1][w-1] = '+';
	ans[h/2][w/2] = c;

	for(int i=0; i<h; i++) puts(ans[i]);
	return 0;
}
