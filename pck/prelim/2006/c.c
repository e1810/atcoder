#include<stdio.h>

int main(){
	int y1, m1, d1, y2, m2, d2, uruu[1000000], m2d[13];
	for(int i=0; i<1000000; i++) uruu[i] = ((i%4==0)&&(i%100!=0)||(i%400==0));

	while(1){
		scanf("%d %d %d %d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);
		if(y1<0|m1<0|d1<0|y2<0|m2<0|d2<0) break;

		int days1 = 0;
		for(int i=0; i<y1; i++) days1 += 365 + uruu[i];
		for(int i=1; i<m1; i++){
			switch(i){
				case 4:
				case 6:
				case 9:
				case 11:
					days1 += 30;break;
				case 2:
					days1 += 28 + uruu[y1];break;
				default:
					days1 += 31;break;
			}
		}
		days1 += d1;

		int days2 = 0;
		for(int i=0; i<y2; i++) days2 += 365 + uruu[i];
		for(int i=1; i<m2; i++){
			switch(i){
				case 4:
				case 6:
				case 9:
				case 11:
					days2 += 30;break;
				case 2:
					days2 += 28 + uruu[y2];break;
				default:
					days2 += 31;break;
			}
		}
		days2 += d2;

		printf("%d\n", days2 - days1);
	}
	return 0;
}
