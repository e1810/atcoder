#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<functional>

template<typename T>
struct Segtree {
    using F = std::function<T(T,T)>;
    const T e;
    F func;
    size_t sz = 1;
    std::vector<T> data;
    Segtree(int n, F func, T e): func(func), e(e){
        while(sz<n) sz <<= 1;
        data.assign(sz*2, e);
    }

    void set(size_t idx, T val){data[sz+idx] = val;}
    void build(){
        for(int i=sz-1; i>0; i--){
            data[i] = func(data[2*i], data[2*i+1]);
        }
    }

    void update(size_t idx, T val){
        idx += sz;
        data[idx] = val;
        while(idx>>=1){
            data[idx] = func(data[idx*2], data[idx*2+1]);
        }
    }

    T query(size_t l, size_t r){
        T resL = e, resR = e;
        for(l+=sz, r+=sz; l<r; l>>=1, r>>=1){
            if(l&1) resL = func(resL, data[l++]);
            if(r&1) resR = func(data[--r], resR);
        }
        return func(resL, resR);
    }

    T operator[](size_t idx){return data[sz+idx];}
};

int n, k;
int a[200000];
Segtree<int> seg(200000, [](int a, int b){return std::max(a, b);}, 1);

std::string recur(int l, int r, std::string &s){
	if(r==n) return s;
	int d = seg.query(l, r+1);
	s += d + '0';
	while(seg[l]!=d) l++;
	return recur(l+1, r+1, s);
}


int main(){
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		seg.set(i, a[i]);
	}
	seg.build();
	std::string s = "";
	std::cout << recur(0, k, s) << '\n';
	return 0;
}
