#include<cstdio>
#include<algorithm>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);

	bool flag = true;
	int cnt = 0;
	while(flag){
		flag = false;
		for(int i=1; i<n; i++){
			if(a[i-1]>a[i]){
				std::swap(a[i-1], a[i]);
				flag = true;
				cnt++;
			}
		}
	}

	for(int i=0; i<n; i++){
		if(i) putchar(' ');
		printf("%d", a[i]);
	}
	printf("\n%d\n", cnt);
	return 0;
}



