
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        ll n; scanf("%lld", &n);
        if(n%2){
                puts("0");
                return 0;
        }

        ll cnt=0, fi=1;
        for(ll i=1; fi<=n; i++){
                fi *= 5;
                cnt += n/fi/2;
        }
        printf("%lld
", cnt);
        return 0;
}
