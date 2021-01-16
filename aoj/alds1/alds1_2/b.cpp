#include<cstdio>
#include<algorithm>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);

	int cnt = 0;
	for(int i=0; i<n; i++){
		int mindex = i;
		for(int j=i; j<n; j++){
			if(a[mindex]>a[j]) mindex = j;
		}
		if(mindex!=i){
			std::swap(a[i], a[mindex]);
			cnt++;
		}
	}

	for(int i=0; i<n; i++){
		if(i) putchar(' ');
		printf("%d", a[i]);
	}
	printf("\n%d\n", cnt);
	return 0;
}

