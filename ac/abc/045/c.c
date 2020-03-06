#include<stdio.h>

int main(){
	int l = 0, s[11];
	while((s[l]=getchar()-'0')!='\n'-'0') l++;
	l--;	

	long int ans = 0;
	for(int i=0; i<(1<<l); i++){
		long int opr = s[0];
		for(int j=0; j<l; j++){
			if((i>>j)&1){
				ans += opr;
				opr = s[j+1];
			}else{
				opr *= 10;
				opr += s[j+1];
			}
		}
		ans += opr;
	}
	
	printf("%ld\n", ans);
	return 0;
}
	

			
	
