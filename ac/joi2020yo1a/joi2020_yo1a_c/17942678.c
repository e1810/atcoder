#include<stdio.h>

void swap(int* a, int* b){
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}


int median(int a, int b, int c){
	if(a>b) swap(&a, &b);
	if(b>c) swap(&b, &c);
	if(a>b) swap(&a, &b);
	return b;
}

void qsort(int *a, int l, int r){
	if(l>=r) return;
	int med = median(a[l], a[(l+r)/2], a[r-1]);
	int i = l, j = r-1;
	while(1){
		while(a[i]<med) i++;
		while(a[j]>med) j--;
		if(i>=j) break;
		swap(a+i, a+j);
		i++; j--;
	}
	qsort(a, l, i);
	qsort(a, j+1, r);
}


int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	n += m;
	int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	qsort(a, 0, n);
	for(int i=0; i<n; i++) printf("%d
", a[i]);
	return 0;
}
