
#include<bits/stdc++.h>

int main(){
        int n;
        scanf("%d", &n);
        std::vector<int> a(n);
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        printf("%d
", std::accumulate(a.begin(), a.end(), 0));
        return 0;
}
