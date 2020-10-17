#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
    int n;
    scanf("%d", &n);
    ll man = 0, eu = 0, che;
    while(n--){
        ll x;
        scanf("%ld", &x);
        man += labs(x);
        eu += x * x;
        che = std::max(che, labs(x));
    }
    printf("%ld
", man);
    printf("%.10lf
", sqrt(eu));
    printf("%ld
", che);
    return 0;
}
