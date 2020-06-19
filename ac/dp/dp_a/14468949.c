#include<stdio.h>
#include<stdlib.h>

int min(int a, int b){
        if(a < b) return a;
        else return b;
}

int main(){
        int n;
        scanf("%d", &n);
        int h[n];
        for(int i=0; i<n; i++) scanf("%d", &h[i]);

        int dp[n];
        for(int i=0; i<n; i++) dp[i] = 1e9;
        dp[0] = 0;

        for(int i=0; i<n; i++){
                if(i >= 1){
                        dp[i] = min(dp[i], dp[i-1] + abs(h[i-1]-h[i]));
                }
                if(i >= 2){
                        dp[i] = min(dp[i], dp[i-2] + abs(h[i-2]-h[i]));
                }
        }
        printf("%d
", dp[n-1]);
        return 0;
}
