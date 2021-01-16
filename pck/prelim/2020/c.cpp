#include<cstdio>
#include<cstdlib>
#include<algorithm>

int main(){
	int n;
	scanf("%d", &n);
	int o, l=1000, r=0, x;
	scanf("%d", &o);
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		x -= o;
		if(x<l) l = x;
		if(r<x) r = x;
	}
	printf("%d\n", abs(r-l)+std::min(abs(l), abs(r)));
	return 0;
}
