#include <cstdio>
#include <queue>
#include <string>
#include <vector>
#include <utility>
 
using namespace std;
 
static const int INF=1<<29;
static const int di[]={-1, 0, 1, 0};
static const int dj[]={0, -1, 0, 1};
 
int main() {
    int R, C, sy, sx, gy, gx;
    scanf("%d %d %d %d %d %d", &R, &C, &sy, &sx, &gy, &gx);
    --sy; --sx; --gy; --gx;
 
    vector<string> c(R);
    for (int i=0; i<R; ++i) {
        char buf[64];
        scanf("%s", buf);
        c[i] = buf;
    }
 
    vector<vector<int>> dp(R, vector<int>(C, INF)); dp[sy][sx]=0;
 
    queue<pair<int, int>> q; q.emplace(sy, sx);
    while (!q.empty()) {
        int i=q.front().first, j=q.front().second; q.pop();
        if (c[i][j] != '.') continue;
 
        for (int k=0; k<4; ++k) {
            int I=i+di[k], J=j+dj[k];
            if (I < 0 || R <= I || J < 0 || C <= J) continue;
            if (dp[I][J] < dp[i][j]) continue;
            if (c[I][J] != '.') continue;
 
            if (I == gy && J == gx)
                return !printf("%d\n", dp[i][j]+1);
 
            dp[I][J] = dp[i][j] + 1;
            c[i][j] = '+';
            q.emplace(I, J);
        }
    }
 
    return 0;
}

