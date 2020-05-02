
#include<bits/stdc++.h>

int main(){
        int n;
        scanf("%d", &n);
        std::vector<int>  p(n), q(n), v(n);
        for(int i=0; i<n; i++) scanf("%d", &p[i]);
        for(int i=0; i<n; i++) scanf("%d", &q[i]);
        for(int i=0; i<n; i++) v[i] = i+1;

        int cnt = 1, a, b;
        do {
                if(p==v) a = cnt;
                if(q==v) b = cnt;
                cnt++;
        }while(std::next_permutation(v.begin(), v.end()));

        printf("%d
", abs(a-b));
        return 0;
}
