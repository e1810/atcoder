#include<bits/stdc++.h>

int main(){
	int a[3];
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	if(a[2]-a[1] == a[1]-a[0]) puts("No");
	else puts("Yes");
	return 0;
}

