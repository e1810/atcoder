// Solving knapsack problem with DP

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// input
// n = value of gilt
// W = limit of total weight
// weight[] = weight of each gilt
// value[] = value of each gilt
int n, W;
int weight[3000], value[3000];

// DP table
int dp[10][10];

//------------------------------------------------------------------------------
/// 指定されたDPテーブルの要素はどの金塊の組み合わせで作れるのかを逆算する
/// @param i 使って良い金塊の個数 i番目までの金塊を使える
///        w ナップサックの耐荷重
///        ans 答え,金塊を0:入れない 1:入れる
void DP_OptimalSolution(const int i, const int w,int ans[]){
    int local_w=w;
    for(int local_i=i-1;local_i>=0;local_i--){
        if (local_w >= weight[local_i] && max(dp[local_i][local_w-weight[local_i]] + value[local_i], dp[local_i][local_w])==dp[local_i][local_w]){
            ans[local_i]=0;
        }
        else if(local_w >= weight[local_i] && max(dp[local_i][local_w-weight[local_i]] + value[local_i], dp[local_i][local_w])==dp[local_i][local_w-weight[local_i]] + value[local_i]){
            ans[local_i]=1;
            local_w=local_w-weight[local_i];
        }
        else if(local_w < weight[local_i]){
            ans[local_i]=0;
        }
    }
}

int main() {

  scanf("%d %d", &n, &W);
  for(int i=0; i<n; i++){
    scanf("%d %d", &weight[i], &value[i]);
  }
  // init
  for (int w = 0; w <= W; ++w) dp[0][w] = 0;

  // DP table
  for (int i = 0; i < n; ++i) {
    for (int w = 0; w <= W; ++w) {
      if (w >= weight[i]) dp[i+1][w] = max(dp[i][w-weight[i]] + value[i], dp[i][w]);
      else dp[i+1][w] = dp[i][w];
    }
  }

  //answer
  int ans[n];
  DP_OptimalSolution(5,4,ans);
  for(int i=0;i<n;i++){
    cout << ans[i] << endl;
  }

  return 0;
}
