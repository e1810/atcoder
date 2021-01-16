#include<cstdio>
#include<queue>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::queue<int> ques[n];

	while(m--){
		int t, x;
		scanf("%d %d", &t, &x);
		if(t==0){
			printf("%d\n", ques[x-1].front());
			ques[x-1].pop();
		}else{
			int minx = 0;
			for(int i=0; i<n; i++){
				if(ques[minx].size()>ques[i].size()){
					minx = i;
				}
			}
			ques[minx].push(x);
		}
	}
	return 0;
}


