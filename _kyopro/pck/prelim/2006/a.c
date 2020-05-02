#include<stdio.h>

int min(int a, int b){
	return a<b? a:b;
}

int main(void){
	char* rank[] = {"NA", "E", "D", "C", "B", "A", "AA", "AAA"};
	double a, b;
	// Please type Ctrl+d at the end when testing without a judging file.
	while(scanf("%lf %lf", &a, &b) == 2){
		int ra = (a<70) + (a<55) + (a<50) + (a<43) + (a<40) + (a<37.5) + (a<35.5);
		int rb = (b<148) + (b<116) + (b<105) + (b<89) + (b<83) + (b<77) + (b<71);
		printf("%s\n", rank[min(ra, rb)]);
	}
	return 0;
}
