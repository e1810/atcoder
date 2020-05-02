
#include<bits/stdc++.h>
using P = std::pair<double,double>;

int main(){
        double px, py;
        int n;
        scanf("%lf %lf %d", &px, &py, &n);
        std::vector<P> pts(n);
        for(int i=0; i<n; i++) scanf("%lf %lf", &pts[i].first, &pts[i].second);
        pts.push_back(pts[0]);

        double ans = 1e11;
        for(int i=0; i<n; i++){
                double a, b, c, d;
                std::tie(a, b) = pts[i];
                std::tie(c, d) = pts[i+1];
                ans = std::min(ans, abs((b-d)*px+(c-a)*py+(a*d-b*c)) / sqrt(((b-d)*(b-d)+(c-a)*(c-a))));
        }
        printf("%.10lf
", ans);
        return 0;
}
