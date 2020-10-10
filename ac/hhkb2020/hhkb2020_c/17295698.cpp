#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(ll i=b; i<e; i++)

int main(){
    int n;
    scanf("%d", &n);
    bool ban[200100] = {};
    int min = 0;
    while(n--){
        int a;
        scanf("%d", &a);
        ban[a] = true;
        while(ban[min]) min++;
        printf("%d
", min);
    }
    return 0;
}
