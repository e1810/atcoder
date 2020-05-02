#include<stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	int hole[n], isIn[110], size=0, i;
	for(i=0; i<n; i++) hole[i]=0;
	for(i=0; i<110; i++) isIn[i]=0;

	for(i=0; i<n; i++){
		int c;
		scanf("%d", &c);
		if(c>0){
			if(isIn[c-1]){
				printf("%d\n", i+1);
				return 0;
			}
			hole[size] = c;
			size++;
			isIn[c-1] = 1;
		}else{
			if(size==0 || !isIn[-c-1] || hole[size-1]!=-c){
				printf("%d\n", i+1);
				return 0;
			}
			hole[size-1] = 0;
			size--;
			isIn[-c-1] = 0;
		}
	}
	puts("OK");
	return 0;
}


