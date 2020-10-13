#include<stdio.h>

int main(){
	double gx, gy, sx, sy, tx, ty;
	scanf("%lf,%lf", &gx, &gy);
	scanf("%lf,%lf", &sx, &sy);
	scanf("%lf,%lf", &tx, &ty);
	gx -= sx;
	gy -= sy;
	tx -= sx;
	ty -= sy;
	
	if(tx*gy - gx*ty > 0) puts("Left");
	else puts("Right");
	return 0;
}

