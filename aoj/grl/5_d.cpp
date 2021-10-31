#include<vector>

struct eular_tour {
	std::vector<int> in, out, visit;
	eular_tour(int n): in(n, -1), out(n, -1) {}

	void tour(int n=0, std::vector<int>* links){
		if(in[n]>=0) return;
		visit.push_back(n);
		for(auto to: links){
			if(in[to]<0) tour(to);
		}
		visit.push_back(-n);
	}
