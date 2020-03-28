
#include<cstdio>
#include<iostream>

int n, tmp, mn=1e9, i;
int_fast64_t cnt;
bool minus, zero;

int main(){
        scanf("%d", &n);
        for(i=0; i<n; i++){
                scanf("%d", &tmp);
                minus ^= (tmp<0);
                zero |= (tmp==0);
                if(mn>abs(tmp)) mn = abs(tmp);
                cnt += abs(tmp);
        }
        if(!minus|zero) printf("%ld
", cnt);
        else printf("%ld
", cnt-mn*2);
        return 0;
}
