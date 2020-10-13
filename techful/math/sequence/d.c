#include<stdio.h>
#include<stdint.h>

int64_t trib_memo[64] = {1, 1, 2};
int64_t trib(int x){
	if(trib_memo[x]) return trib_memo[x];
	return trib_memo[x] = trib(x-1) + trib(x-2) + trib(x-3);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%ld\n", trib(n-1));
	return 0;
}
