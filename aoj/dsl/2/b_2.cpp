#include<bits/stdc++.h>

struct Fenwick {
    std::vector<int> data;

    Fenwick(int sz=1e5): data(sz+1, 0) {}

    void add(int idx, int x){
        idx++;
        while(idx<data.size()){
            data[idx] += x;
            idx += idx & -idx;
        }
    }

    int sum(int r){
        int ret = 0;
        r++;
        while(r>0){
            ret += data[r];
            r -= r & -r;
        }
	return ret;
    }
};


int main(){
    int n, q, t, x, y;
    scanf("%d %d", &n, &q);
    Fenwick bit(n);
    while(q--){
	scanf("%d %d %d", &t, &x, &y);
	if(t==0) bit.add(x-1, y);
	else printf("%d\n", bit.sum(y-1) - bit.sum(x-2));
    }
    return 0;
}
