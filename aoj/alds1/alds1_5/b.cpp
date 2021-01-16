#include<cstdio>
#include<climits>
const int INF = INT_MAX;

int mergeSort(int* a, int l, int r){
	if(r-l<2) return 0;
	int mid = (l+r)/2, cnt = 0;
	cnt += mergeSort(a, l, mid);
	cnt += mergeSort(a, mid, r);

	int n = mid - l,  m = r - mid;
	int b[n+1], c[m+1];
	for(int i=0; i<n; i++) b[i] = a[l+i];
	for(int i=0; i<m; i++) c[i] = a[mid+i];
	b[n] = c[m] = INF;
	
	int I = 0, J = 0;
	for(int i=l; i<r; i++){
		if(b[I]<c[J]) a[i] = b[I++];
		else a[i] = c[J++];
		cnt++;
	}
	return cnt;
}

	
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);

	int cnt = mergeSort(a, 0, n);
	for(int i=0; i<n; i++){
		if(i) putchar(' ');
		printf("%d", a[i]);
	}
	printf("\n%d\n", cnt);
	return 0;
}
