#include<bits/stdc++.h>
using ll = int_fast64_t;
#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}

template<typename T>
struct HeapQ {
    std::vector<T> tree;
	HeapQ(): tree(1) {}

    T top(){
        assert(tree.size()>1);
        return tree[1];
    }

    void push(T x){
        tree.push_back(x);
        size_t pos = tree.size() - 1;
        while(pos/2 > 0){
            if(tree[pos/2] < tree[pos]){
                std::swap(tree[pos/2], tree[pos]);
            }else break;
			pos /= 2;
        }
    }

    void pop(){
        tree[1] = tree.back();
        tree.pop_back();
        size_t pos = 1;
        while(pos*2<tree.size()){
			size_t nx = pos * 2;
			if(nx+1<tree.size() && tree[nx]<tree[nx+1]){
				nx++;
			}
            if(tree[pos] < tree[nx]){
                std::swap(tree[pos], tree[nx]);
            }else break;
			pos = nx;
        }
    }
};


int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	HeapQ<int> que;
	REP(i, 0, n){
		int a;
		scanf("%d", &a);
		que.push(a);
	}

	while(m--){
		//PRINT(que.tree);
		int nx = que.top() / 2;
		que.pop();
		que.push(nx);
	}

	ll ans = 0;
	REP(i, 0, n){
		ans += que.top();
		que.pop();
	}
	printf("%ld
", ans);
	return 0;
}
