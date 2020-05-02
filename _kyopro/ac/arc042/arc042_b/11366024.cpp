
#include<bits/stdc++.h>


struct Point {
        double x, y, abs;

        Point() {};
        constexpr Point(double a, double b): x(a), y(b), abs(sqrt(a*a + b*b)) {};

        constexpr Point operator+(const Point &other) const noexcept {
                return Point(x + other.x, y + other.y);
        }

        constexpr Point operator-(const Point &other) const noexcept {
                return Point(x - other.x, y - other.y);
        }

        constexpr Point operator*(const double &other) const noexcept {
                return  Point(x * other, y * other);
        }

        constexpr double operator*(const Point &other) const noexcept {
                return x * other.x + y * other.y;
        }

        constexpr Point operator/(const double &other) const noexcept {
                return Point(x / other, y / other);
        }
};

double LPdist(Point a, Point b, Point p){
        Point i = a + (b-a) * ((p-a)*(b-a) / ((b-a).abs*(b-a).abs));
        return sqrt((i.x-p.x)*(i.x-p.x) + (i.y-p.y)*(i.y-p.y));
}



int main(){
        Point p;
        int n;
        scanf("%lf %lf %d", &p.x, &p.y, &n);

        std::vector<Point> points(n);
        for(int i=0; i<n; i++) scanf("%lf %lf", &points[i].x, &points[i].y);
        points.push_back(points[0]);

        double ans = 1e18;
        for(int i=0; i<n; i++){
                ans = std::min(ans, LPdist(points[i], points[i+1], p));
        }
        printf("%.10lf
", ans);
        return 0;
}
