#include<cstdio>
#include<cstdint>
#include<vector>
using i64 = int_fast64_t;


int main(){
	i64 a, b, c, d, e, f;
	scanf("%ld %ld %ld %ld %ld %ld", &a, &b, &c, &d, &e, &f);

	std::vector<i64> anss;
	for(i64 i=-100; i<=100; i++){
		i64 tmp = 0;
		tmp += a * i * i * i * i * i;
		tmp += b * i * i * i * i;
		tmp += c * i * i * i;
		tmp += d * i * i;
		tmp += e * i;
		tmp += f;
		if(tmp==0) anss.push_back(i);
	}
	
	printf("%ld\n", anss.size());
	for(auto x: anss) printf("%ld\n", x);
	return 0;
}
	
