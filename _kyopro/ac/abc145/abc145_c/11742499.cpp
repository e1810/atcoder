
#include<bits/stdc++.h>

int n, x[10], y[10];
double sum;

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d %d", &x[i], &y[i]);
	for(int i=0; i<n; i++) for(int j=0; j<n; j++) sum += std::hypot(x[i]-x[j], y[i]-y[j]);
	printf("%.10lf
", sum/(double)n);
	return 0;	
}
