#include<stdio.h>
#include<math.h>

int main(){
	char s[8], ans[8];
	scanf("%s", s);
	int n[4];
	for(int i=0; i<4; i++){
		n[i] = s[i] - '0';
		ans[i*2] = s[i];
	}

	for(int i=0; i<8; i++){
		int cnt = n[0];
		for(int j=0; j<3; j++){	
			cnt += n[j+1] * pow(-1, (i>>j)&1);
			ans[j*2+1] = 44 + pow(-1, !((i>>j)&1));
		}
		if(cnt==7) break;
	}
	printf("%s=7\n", ans);
	return 0;
}



