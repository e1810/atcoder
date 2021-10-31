#include<cstdio>
#include<string>
#include<iostream>

#include<vector>
#include<algorithm>
#include<cassert>

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
            if(nx+1 < tree.size()){
                if(tree[nx] < tree[nx+1]) nx++;
            }
            if(tree[pos] < tree[nx]){
                std::swap(tree[pos], tree[nx]);
            }else break;
            pos = nx;
        }
    }
};


int main(){
	HeapQ<int> que;
	std::string s;
	while(true){
		std::cin >> s;
		if(s=="insert"){
			int x;
			scanf("%d", &x);
			que.push(x);
		}else if(s=="extract"){
			printf("%d\n", que.top());
			que.pop();
		}else break;
	}
	return 0;
}
