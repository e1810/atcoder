
#include<bits/stdc++.h>

int main(){
    int n;
    scanf("%d", &n);
    std::vector<int> a(n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    std::vector<int> srtd(a);
    sort(srtd.begin(), srtd.end());

    bool can = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            std::vector<int> b(a);
            std::swap(b[i], b[j]);
            for(int k=0; k<n; k++){
                if(srtd[k]!=b[k]) break;
                else if (k==n-1) can = 1;
            }
        }
    }
    
    if(can) puts("YES");
    else puts("NO");
    return 0;
}
