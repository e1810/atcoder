#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)
const double EPS = 1e-10;

struct Point {
    double x, y;
    Point(double x=0, double y=0): x(x), y(y) {}
    Point(const Point &a): x(a.x), y(a.y) {}
};
inline Point operator+(const Point &p, const Point &q) {return Point(p.x+q.x, p.y+q.y);}
inline Point operator-(const Point &p, const Point &q) {return Point(p.x-q.x, p.y-q.y);}
inline Point operator*(const Point &p, double a) {return Point(p.x*a, p.y*a);}
inline Point operator/(const Point &p, double a) {return Point(p.x/a, p.y/a);}

inline Point rot90(const Point &p){ return Point(-p.y, p.x); }
inline double dot(const Point &a, const Point &b){ return a.x*b.x + a.y*b.y; }
inline double cross(const Point &a, const Point &b){ return a.x*b.y - b.x*a.y; }
inline double abs(const Point &p){ return sqrt(dot(p, p)); }

struct Line {
    Point a, b;
    Line(Point a, Point b): a(a), b(b) {}
};


Point crosspoint(const Line &l, const Line &m){
    double A = cross(m.b - m.a, l.b - l.a);
    double B = cross(m.b - m.a, m.b - l.a);
    if(abs(A)<EPS) return Point(EPS,EPS);
    return l.a + (l.b-l.a) * B/A;
}

Point gaisin(Point a, Point b, Point c){
    Line ab((a+b)/2, (a+b)/2+rot90(a-b));
    Line bc((b+c)/2, (b+c)/2+rot90(b-c));
    return crosspoint(ab, bc);
}

int main(){
	int n;
	scanf("%d", &n);
	std::vector<Point> ps(n);
	REP(i, 0, n) scanf("%lf %lf", &ps[i].x, &ps[i].y);

	double ans = 1000;
	REP(i, 0, n) REP(j, i+1, n) REP(k, j+1, n) {
	    Point gs = gaisin(ps[i], ps[j], ps[k]);
	    if(gs.x==EPS and gs.y==EPS) continue;
	    double R = abs(gs-ps[i]);
	    bool ok = true;
	    REP(l, 0, n){
		if(R<abs(gs-ps[l])) ok = false;
	    }
	    if(ok && ans>R) ans = R;
	}

	REP(i, 0, n) REP(j, i+1, n) {
	    Point o = (ps[i]+ps[j])/2;
	    double R = abs(o-ps[i]);
	    bool ok = true;
	    REP(k, 0, n){
		if(R<abs(o-ps[k])) ok = false;
	    }
	    if(ok && ans>R) ans = R;
	}
	printf("%.10lf
", ans);
	return 0;
}
