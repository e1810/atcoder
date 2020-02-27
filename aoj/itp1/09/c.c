#include<stdio.h>

int main(void){
	int n, a=0, b=0;;
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		char s[101], t[101];
		scanf("%s %s", s, t);
		
		for(int j=0; j<101; j++){
			if(s[j]=='\0'){
				if(t[j]=='\0'){
					a++;
					b++;
				}else b += 3;
			}else if(t[j]=='\0') a += 3;
			else{
				if(s[j]==t[j]) continue;
				if(s[j]>t[j]) a += 3;
				else b += 3;
			}
			break;
		}
	}
	printf("%d %d\n", a, b);
	return 0;
}
			
