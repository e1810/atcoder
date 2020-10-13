#include<stdio.h>

int main(){
	int x;
	scanf("%d", &x);

	double cnt = 0;
	for(int i=1; i<=6; i++){
		for(int j=1; j<=6; j++){
			for(int k=1; k<=6; k++){
				if(i+j+k>x) cnt += 1;
			}
		}
	}

	printf("%.3lf\n", cnt / 216);
	return 0;
}
