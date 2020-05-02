#include<stdio.h>
#include<math.h>

int main(){
	while(1){
		double x[4], y[4], r;
		int i, j;
		scanf("%lf %lf", &x[0], &y[0]);
		if(x[0]==0 && y[0]==0) break;
		for(i=1;i<4;i++) scanf("%lf %lf", &x[i], &y[i]);
		scanf("%lf", &r);

		int coutt = 0;
		for(i=0; i<3; i++){
			j = (i+1)%3;
			double a = (y[i]-y[j])/(x[i]-x[j]);
			double b = (x[i]*y[j]-y[i]*x[j])/(x[i]-x[j]);

			double d = (a*x[3]-y[3]+b)/sqrt(a*a+1);
			if(d<r) coutt++;
		}

		int toutc = 0;
		for(i=0; i<3; i++){
			double a = (x[i]-x[3]);
			double b = (y[i]-y[3]);
			double d = sqrt(a*a+b*b);
			if(d>r) toutc++;
		}

		if(!coutt){
			int gsk[3];
			for(i=0; i<3; i++){
				j = (i+1)%3;
				gsk[i] = (x[3]-x[j])*(y[i]-y[j])-(x[i]-x[j])*(y[3]-y[j]) < 0;
			}
			int oint = (gsk[0]==gsk[1] && gsk[1]==gsk[2]);

			if(oint) puts("a");
			else puts("c");
		}
		else if(!toutc) puts("b");
		else if(coutt!=3 || toutc!=3) puts("c");
		else puts("d");
	}
	return 0;
}
