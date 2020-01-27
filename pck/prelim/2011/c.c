#include<stdio.h>

double tanri(int y, double r){
	return 1+y*r/100.0;
}

double fukuri(int y, double r){
	double ret=1;
	int i;
	for(i=0; i<y; i++) ret *= 1+r/100.0;
	return ret;
}

int main(void){
	while(1){
		int n, y;
		scanf("%d", &n);
		if(n==0) break;
		scanf("%d", &y);

		double mxget=0;
		int i, mxidx;
		for(i=0; i<n; i++){
			int b, r, t;
			double get;
			scanf("%d %d %d", &b, &r, &t);
			if(t==1) get = tanri(y, r);
			else get = fukuri(y, r);

			if(mxget<=get){
				mxget = get;
				mxidx = b;
			}
		}
		printf("%d\n", mxidx);
	}
	return 0;
}


