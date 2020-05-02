
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
        ll w, h, mallw, mallh;
        scanf("%lld %lld %lld %lld", &w, &h, &mallw, &mallh);

        ll fig[h+2][w+2];
		bool xxx[h+2][w+2];

        for(ll j=0; j<w+2; j++) fig[0][j] = 0, xxx[0][j] = true;
        for(ll i=1; i<h+1; i++){
                fig[i][0] = 0; xxx[i][0] = true;
                for(ll j=1; j<w+1; j++) xxx[i][j] = false;
                fig[i][w+1] = 0; xxx[i][w+1] = true;
        }
        for(ll j=0; j<w+2; j++) fig[h+1][j] = 0, xxx[h+1][j] = true;

        for(ll i=1; i<=h; i++){
                for(ll j=1; j<=w; j++){
                        ll tmp; scanf("%lld", &tmp);
                        if(tmp==-1){
                                fig[i][j] = 0;
                                xxx[i][j] = true;
                        }else{
                                fig[i][j] = tmp;
                        }
                }
        }


        for(ll i=1; i<=h; i++){
                for(ll j=1; j<w+2; j++) fig[i][j] += fig[i][j-1];
                for(ll j=1; j<w+2; j++) fig[i][j] += fig[i-1][j];
        }

        for(ll i=h-1; i>=0; i--){
                for(ll j=w-1; j>=0; j--){
                        if(xxx[i][j]){
                                for(ll ii=0; ii<mallh; ii++){
                                        if(i+ii>h) break;
                                        for(ll jj=0; jj<mallw; jj++){
                                                if(j+jj>w) break;
                                                xxx[i+ii][j+jj] = true;
                                        }
                                }
                        }
                }
        }
        //for(ll i=0; i<h+2; i++){for(ll j=0; j<w+2; j++)printf("%3d ", fig[i][j]);puts("");}


        ll ans = 1e11;
        for(ll i=1; i<=h; i++){
                for(ll j=1; j<=w; j++){
                        if(xxx[i][j])continue;
                        ll si = i-mallh, sj = j-mallw;
                        ans = min(ans, fig[si][sj] - fig[i][sj] -fig[si][j] + fig[i][j]);
                        //printf("%lld(%lld %lld)", ans, i, j);
                }
        }
        printf("%lld
", ans);
        return 0;
}
