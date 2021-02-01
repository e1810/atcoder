#include<bits/stdc++.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a>b) std::swap(a, b);
	while(b--) printf("%d", a); puts("");
	return 0;
}
