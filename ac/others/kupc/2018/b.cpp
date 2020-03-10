#include<bits/stdc++.h>
using P = std::pair<int,int>;
using PP = std::pair<P, int>;

int h, w, fie[12][12];

long dfs(P pt, int d, long way){
	if(d==h-1) return way;
	long ret = 0;
	for(int i=1; i<4; i++){
		if(fie[pt.first-1][pt.second-2+i]) continue;
		ret = std::max(ret, dfs(P(pt.first-1,pt.second-2+i), d+1, way*10+i));
	}
	return ret;
}


int main(){
	scanf("%d %d", &h, &w);
	for(int i=0; i<144; i++) fie[i/12][i%12]=1;
	P st;
	for(int i=1; i<=h; i++){
		char s[w+1];
		scanf("%s", s);
		for(int j=1; j<=w; j++){
			fie[i][j] = (s[j-1]=='x');
			if(s[j-1]=='s') st = P(i,j);
		}
	}

	long way = dfs(st, 0, 0);
	char s[100];
	for(int i=0; i<h-1; i++){
		if(way%10==1) s[i]='L';
		else if(way%10==2) s[i]='S';
		else if(way%10==3) s[i]='R';
		else{
			puts("impossible");
			return 0;
		}
		way /= 10;
	}
	for(int i=h-2; i>=0; i--) putchar(s[i]);
	putchar('\n');
	return 0;
}


