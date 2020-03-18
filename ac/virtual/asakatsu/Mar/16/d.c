#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int table[10][10];
	memset(table, 0, 400);
	for(int i=0; i<=n; i++){
		int a, b=i%10;
		char s[7];
		snprintf(s, 7, "%d", i);
		a = s[0]-'0';
		table[a][b]++;
	}

	long ans = 0;
	for(int i=1; i<10; i++){
		for(int j=1; j<10; j++){
			ans += table[i][j] * table[j][i];
		}
	}
	printf("%ld\n", ans);
	return 0;
}
