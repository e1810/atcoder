
#include<bits/stdc++.h>

int main(){
        int n;
        scanf("%d", &n);
        std::vector<int> x(n), y(n), v(n);;
        for(int i=0; i<n; i++){
                scanf("%d %d", &x[i], &y[i]);
                v[i] = i;
        }

        double sum = 0, cnt = 0;
        do {
                cnt++;
                double d = 0;
                for(int i=0; i<n-1; i++){
                        d += std::hypot(x[v[i]]-x[v[i+1]], y[v[i]]-y[v[i+1]]);
                }
                sum += d;
        }while(std::next_permutation(v.begin(), v.end()));

        printf("%.10lf
", sum/cnt);
        return 0;
}
