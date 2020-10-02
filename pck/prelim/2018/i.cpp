#include<bits/stdc++.h>
#define int long long

struct Real {
    int a, b;
    Real(int a=1, int b=1): a(a), b(b) {
	int g = std::__gcd(a, b);
	if(g) a /= g;
	if(g) b /= g;	
    }

    Real operator+(Real other){
	int g = std::__gcd(this->b, other.b);
	if(g==0) g = 1;
	return Real(this->a*other.b/g + other.a*this->b/g, this->b*other.b/g);
    }
    Real operator-(){return Real(-this->a, this->b);}
    Real operator-(Real other){
	return (*this) + -other;
    }
    Real operator*(Real other){
	return Real(this->a*other.a, this->b*other.b);
    }
    Real operator/(Real other){
	return Real(this->a*other.b, this->b*other.a);
    }
};
bool operator<(const Real me, const Real other){
    int g = std::__gcd(me.b, other.b);
    if(g==0) g = 1;
    return (me.a*other.b/g) < (other.a*me.b/g);
}

signed main(){
    int n, k;
    scanf("%lld %lld", &n, &k);
    double x[n], y[n];
    for(int i=0; i<n; i++) scanf("%lf %lf", &x[i], &y[i]);

    bool ok = true;
    std::map<std::pair<Real,Real>, int> mp;
    for(int i=0; i<n; i++) for(int j=i+1; j<n; j++) {
	Real a(y[j]-y[i], x[j]-x[i]);
	Real b = Real(y[i],1) - a*Real(x[i], 1);
	if(++mp[{a, b}]+mp[{-a, -b}]>=k) ok = false;
    }
    if(ok) puts("0");
    else puts("1");
    return 0;
}

