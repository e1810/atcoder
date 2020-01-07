
#include<iostream>
#include<vector>
typedef long long ll;

std::vector<ll> nums(87);

ll lucas(ll n){
        if(n==0) return 2;
        if(n==1) return 1;
        if(nums[n]) return nums[n];
        nums[n] = lucas(n-1) + lucas(n-2);
        return nums[n];
}

int main(){
        nums[0] = 2;
        nums[1] = 1;
        ll n; scanf("%lld", &n);
        printf("%lld
", lucas(n));
        return 0;
}
