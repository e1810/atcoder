
#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	char s[n+1];
	scanf("%s", s);
	
	int ans = 0;
	for(int i=0; i<10; i++) for(int j=0; j<10; j++) for(int k=0; k<10; k++){
		int m[] = {i, j, k}, idx = 0;
		for(int l=0; l<n; l++){
			if(idx>2) break;
			if(s[l]-'0'==m[idx]) idx++;
		}
		if(idx>2) ans++;
	}
	printf("%d
", ans);
	return 0;
}
