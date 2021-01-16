#include<cstdio>
#include<algorithm>

void print(int n, int* a){
	for(int i=0; i<n; i++){
		if(i) putchar(' ');
		printf("%d", a[i]);
	}
	putchar('\n');
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);

	for(int i=0; i<n; i++){
		int pos = i;
		while(pos>0){
			if(a[pos-1]<=a[pos]) break;
			std::swap(a[pos-1], a[pos]);
			pos--;
		}
		print(n, a);
	}
	return 0;
}

