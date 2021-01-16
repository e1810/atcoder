#include<cstdio>
#include<cstdlib>
#include<algorithm>

int main(){
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	int a = abs(x-y), ans = std::min(x, y);
	if(a<=z){
		ans += a;
		z -= a;
		a = 0;
	}else{
		ans += z;
		a -= z;
		z = 0;
	}
	ans += z/2;
	printf("%d\n", ans);
	return 0;
}

	

