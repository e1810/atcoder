#include<bits/stdc++.h>

bool eq(double a, double b){
    return abs(a-b)<1e-4;
}

struct Point {
    double x, y;
    Point(double x=0, double y=0): x(x), y(y) {}
    Point(const Point &a): x(a.x), y(a.y) {}
    
    Point operator+(Point other){ return Point(this->x + other.x, this->y + other.y); }
    Point operator-(Point other){ return Point(this->x - other.x, this->y - other.y); }
    Point operator*(double scalar){ return Point(this->x * scalar, this->y * scalar); }
    Point operator/(double scalar){ return Point(this->x / scalar, this->y / scalar); }
};

Point rot90(Point p){ return Point(-p.y, p.x); }

double dot(Point a, Point b){
    return a.x*b.x + a.y*b.y;
}

double cross(Point a, Point b){
    return a.x*b.y - b.x*a.y;
}

double degree(Point a){
    return atan2(a.y, a.x);
}


struct Line {
    Point a, b;
    Line(Point a, Point b): a(a), b(b) {}
};

Point crosspoint(Line l, Line m){
    double A = cross(l.b - l.a, m.b - m.a);
    double B = cross(l.b - l.a, l.b - m.a);
    if(eq(A,0) && eq(B,0)) return m.a;
    return m.a + (m.b-m.a) * B/A;
}

Point gaisin(Point a, Point b, Point c){
    Line ab((a+b)/2, (a+b)/2+rot90(a-b));
    Line bc((b+c)/2, (b+c)/2+rot90(b-c));
    return crosspoint(ab, bc);
}

bool in_tri(Point a, Point b, Point c, Point p){
    double abp = cross(b-a, p-b);
    double bcp = cross(c-b, p-c);
    double cap = cross(a-c, p-a);
    return (abp<=0 && bcp<=0 && cap<=0) || (abp>=0 && bcp>=0 && cap>=0);
}


int main(){
    int n;
    scanf("%d", &n);
    Point o(0, 0);
    std::vector<Point> shadow;
    for(int i=0; i<n; i++){
	Point a;
	scanf("%lf %lf", &a.x, &a.y);
	shadow.push_back(a+a/9999);
    }

    int q;
    scanf("%d", &q);
    while(q--){
	Point p;
	scanf("%lf %lf", &p.x, &p.y);

	int l=1, r=n-1;
	while(r-l>1) {
	    int mid = (l+r)/2;
	    if(degree(shadow[mid]-shadow[0])<degree(p-shadow[0])) l=mid;
	    else r = mid;
	}
	if(degree(shadow[1]-shadow[0])>degree(p-shadow[0])){
	    puts("0");
	    continue;
	}
	if(degree(shadow[n-1]-shadow[0])<degree(p-shadow[0])){
	    puts("0");
	    continue;
	}

	if(in_tri(shadow[0], shadow[l], shadow[l+1], p)){
	    puts("1");
	}else puts("0");
    }
    return 0;
}
