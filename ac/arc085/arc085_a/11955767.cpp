
#include<bits/stdc++.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d
", ((n-m)*100+m*1900) * (1<<m));
}
