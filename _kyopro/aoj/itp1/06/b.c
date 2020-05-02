#include<stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	
	int S[13], H[13], C[13], D[13];
	for(int i=0; i<13; i++) S[i] = H[i] = C[i] = D[i] = 1;
	for(int i=0; i<n; i++){
		getchar();
		char m;
		int a;
		scanf("%c %d", &m, &a);

		if(m=='S') S[a-1] = 0;
		if(m=='H') H[a-1] = 0;
		if(m=='C') C[a-1] = 0;
		if(m=='D') D[a-1] = 0;
	}
	
	for(int i=0; i<13; i++) S[i] && printf("S %d\n", i+1);
	for(int i=0; i<13; i++) H[i] && printf("H %d\n", i+1);
	for(int i=0; i<13; i++) C[i] && printf("C %d\n", i+1);
	for(int i=0; i<13; i++) D[i] && printf("D %d\n", i+1);
	return 0;
}
	
		
