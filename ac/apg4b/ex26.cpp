#include<bits/stdc++.h>
using namespace std;

int main(){
	map<string, int> var;
	for(int i=0; i<10; i++){
		var[to_string(i)] = i;
		var[to_string(-i)] = -i;
	}
	map<string, vector<int>> vec;

	int n; scanf("%d", &n);
	for(int i=0; i<n; i++){
		string s; cin >> s;
		if(s == "int"){
			string varname;
			cin >> varname;
			var[varname] = 0;

			while(1){
				string ope, val;
				cin >> ope;
				if(ope==";") break;
				cin >> val;
				int value = var[val];
				if(ope == "-") value *= -1;
				var[varname] += value;
			}
		}else if(s == "print_int"){
			string val;
			cin >> val;
			int ret = var[val];
			while(1){
				string ope;
				cin >> ope;
				if(ope==";") break;
				cin >> val;
				int value = var[val];
				if(ope == "-") value *= -1;
				ret += value;
			}
			printf("%d\n", ret);
		}else if(s == "vec"){
			string arrname, gbg;
			cin >> arrname >> gbg >> gbg;
			vector<int> arr;
			if(gbg=="["){
				while(1){
					string num, sep;
					cin >> num >> sep;
					arr.push_back(var[num]);
					if(sep == "]") break;
				}
			}else arr = vec[gbg];
			while(1){
				string ope;
				cin >> ope;
				if(ope==";") break;
				cin >> gbg;
				if(gbg=="["){
					int cnt = 0, fugo = -1 + 2*(ope=="+");
					while(1){
						string num, sep;
						cin >> num >> sep;
						int val = var[num];
						arr[cnt] += val * fugo;
						cnt++;
						if(sep == "]") break;
					}
				}else{
					int cnt = 0;
					for(int i: vec[gbg]){
						arr[cnt] += i * (-1 + 2*(ope=="+"));
						cnt++;
					}
				}
			}
			vec[arrname] = arr;
		}else{
			string arr;
			cin >> arr;
			vector<int> ret;
			if(arr=="["){
				while(1){
					string num, sep;
					cin >> num >> sep;
					ret.push_back(var[num]);
					if(sep=="]") break;
				}
			}else ret = vec[arr];
			
			while(1){
				string ope, gbg;
				cin >> ope;
				if(ope==";") break;
				cin >> gbg;
				if(gbg=="["){
					int cnt = 0, fugo = -1 + 2*(ope=="+");
					while(1){
						string num, sep;
						cin >> num >> sep;
						int val = var[num];
						ret[cnt] += val * fugo;
						cnt++;
						if(sep=="]") break;
					}
				}else{
					int cnt = 0;
					for(int i: vec[gbg]){
						ret[cnt] += i * (-1 + 2*(ope=="+"));
						cnt++;
					}
				}
			}
			cout << "[ ";
			for(int i: ret) printf("%d ", i);
			cout << "]" << endl;
		}
	}
}
