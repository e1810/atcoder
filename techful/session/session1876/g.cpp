#include<cstdio>
#include<set>

int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	int a[n], b[n], c[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	for(int i=0; i<n; i++) scanf("%d", &b[i]);
	for(int i=0; i<n; i++) scanf("%d", &c[i]);

	bool can[3][10000] = {};
	for(int i=0; i<n; i++){
		can[0][a[i]] = true;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<10000; j++) if(can[0][j]) {
			if(j+b[i]<10000) can[1][j+b[i]] = true;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<10000; j++) if(can[1][j]) {
			if(j+c[i]<10000) can[2][j+c[i]] = true;
		}
	}

	while(q--){
		int x;
		scanf("%d", &x);
		if(can[2][x]) puts("Yes");
		else puts("No");
	}
	return 0;
}


