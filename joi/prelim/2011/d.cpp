#include<bits/stdc++.h>

int main(){
  int n, a;
  scanf("%d", &n);
  uint64_t dp[n][21] = {};
  dp[0][0] = 1;

  for(int i=0; i<n-1; i++){
    scanf("%d", &a);
    for(int j=0; j<21; j++){
      if(dp[i][j]){
        if(j+a<21) dp[i+1][j+a] += dp[i][j];
        if(!(i==0 and a==0) and 0<=j-a) dp[i+1][j-a] += dp[i][j];
      }
    }
  }

  scanf("%d", &a);
  printf("%lu\n", dp[n-1][a]);
  return 0;
}
