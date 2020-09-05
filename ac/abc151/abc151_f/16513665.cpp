#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)
const double EPS = 1e-10;

struct Point {
    double x, y;
    Point(double x=0, double y=0): x(x), y(y) {}
};
inline Point operator+(const Point &p, const Point &q) {return Point(p.x+q.x, p.y+q.y);}
inline Point operator-(const Point &p, const Point &q) {return Point(p.x-q.x, p.y-q.y);}
inline Point operator*(const Point &p, double a) {return Point(p.x*a, p.y*a);}
inline Point operator/(const Point &p, double a) {return Point(p.x/a, p.y/a);}

inline Point rot90(const Point &p) {return Point(-p.y, p.x);}
inline double cross(const Point &p, const Point &q) {return p.x*q.y - p.y*q.x;}
inline double dot(const Point &p, const Point &q) {return p.x*q.x + p.y*q.y;}
inline double abs(const Point &p) {return sqrt(dot(p, p));}

struct Line: std::vector<Point> {
    Line(Point a=Point(0,0), Point b=Point(0,0)) {
        this->push_back(a);
        this->push_back(b);
    }
};

std::vector<Point> crosspoint(const Line &l, const Line &m) {
    std::vector<Point> res;
    double d = cross(m[1]-m[0], l[1]-l[0]);
    if(abs(d)<EPS) return std::vector<Point>();
    res.push_back(l[0]+(l[1]-l[0])*cross(m[1]-m[0], m[1]-l[0]) / d);
    return res;
}

Point gaisin(Point a, Point b, Point c) {
    Line ab((a+b)/2, (a+b)/2+rot90(a-b));
    Line bc((b+c)/2, (b+c)/2+rot90(b-c));
    std::vector<Point> cp = crosspoint(ab, bc);
    if(cp.size()) return cp[0];
    else return Point(EPS, EPS);
}


int main(){
	int n;
	scanf("%d", &n);
	std::vector<Point> ps(n);
	REP(i, 0, n) scanf("%lf %lf", &ps[i].x, &ps[i].y);

	double ans = 1000;
	REP(i, 0, ps.size()) REP(j, i+1, ps.size()) REP(k, j+1, ps.size()) {
	    Point gs = gaisin(ps[i], ps[j], ps[k]);
	    if(gs.x==EPS and gs.y==EPS) continue;
	    double R = abs(gs-ps[i]);
	    bool ok = true;
	    REP(l, 0, ps.size()){
		if(R<abs(gs-ps[l])) ok = false;
	    }
	    if(ok && ans>R) ans = R;
	}

	REP(i, 0, ps.size()) REP(j, i+1, ps.size()) {
	    Point o = (ps[i]+ps[j])/2;
	    double R = abs(o-ps[i]);
	    bool ok = true;
	    REP(k, 0, ps.size()){
		if(R<abs(o-ps[k])) ok = false;
	    }
	    if(ok && ans>R) ans = R;
	}
	printf("%.10lf
", ans);
	return 0;
}
