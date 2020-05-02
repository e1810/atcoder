
#include<bits/stdc++.h>

int main(){
    int n;
    scanf("%d", &n);
    std::vector<int> a(n);
    for(int i=0; i<n; i++){
        int tmp;
        scanf("%d", &tmp);
        a[tmp]++;
    }

    int ans = 1;
    for(int i=1; i<n; i++){
        if(n%2==i%2){
            if(a[i]) ans = 0;
        }else if(a[i]==2){
            ans *= 2;
            ans %= 1000000007;
        }else ans = 0;
    }
    printf("%d
", ans);
    return 0;
}
