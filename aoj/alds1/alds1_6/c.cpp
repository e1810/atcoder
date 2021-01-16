#include<cstdio>
#include<algorithm>
#include<vector>

int median(std::vector<int> a){
	if(a[0]>a[1]) std::swap(a[0], a[1]);
	if(a[1]>a[2]) std::swap(a[1], a[2]);
	if(a[0]>a[1]) std::swap(a[0], a[1]);
	return a[1];
}

void qsort(int* a, int l, int r){
	if(l>=r) return;
	int med = median({a[l], a[(l+r)/2], a[r-1]});
	int i = l, j = r-1;
	while(true){
		while(a[i]<med) i++;
		while(a[j]>med) j--;
		if(i>=j) break;
		std::swap(a[i], a[j]);
		i++; j--;
	}
	qsort(a, l, i);
	qsort(a, j+1, r);
}

int main(){
	int n;
	scanf("%d", &n);
	bool flag = false;
	int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);

	qsort(a, 0, n);
	for(int i=0; i<n; i++){
		if(i) putchar(' ');
		printf("%d", a[i]);
	}
	puts("");
	return 0;
}
