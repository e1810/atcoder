
#include<bits/stdc++.h>

int main(){
	int n, l;
	scanf("%d %d", &n, &l);
	int min = 2e9, sum = 0;
	for(int i=0; i<n; i++){
		sum += l+i;
		if(abs(min)>abs(l+i)) min = l+i;
	}
	printf("%d
", sum-min);
}
