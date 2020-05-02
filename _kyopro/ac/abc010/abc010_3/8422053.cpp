
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
        int sx, sy, gx, gy, t, v, n;
        scanf("%d %d %d %d %d %d %d", &sx, &sy, &gx, &gy, &t, &v, &n);
        string ans = "NO";
        for(int i=0; i<n; i++){
                int x, y;
                scanf("%d %d", &x, &y);
                double d1 = sqrt(pow(x-sx, 2) + pow(y-sy, 2));
                double d2 = sqrt(pow(gx-x, 2) + pow(gy-y, 2));
                if(d1+d2 <= t*v) ans = "YES";
        }
        cout << ans << endl;
        return 0;
}
