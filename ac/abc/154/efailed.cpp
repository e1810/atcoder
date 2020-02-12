#include<bits/stdc++.h>
using namespace std;

int reter(int k, string n, int stt, int p){
	if(k==0) return 0;
	long long sum = n[p]-'1';
	for(int i=stt; i<n.size(); i++){
		sum += reter(k-1, n, stt+1, i);
	}
	return 0;
}

int main(){
	string n;
	int k;
	cin >> n >> k;
	int l = n.size();

	if(l<k){
		puts("0");
		return 0;
	}


	long long ans = 0;
	if(k==3){
		for(int i=0; i<l-2; i++){
			if(n[i]=='0') continue;
			tmp1 = (n[i]-'1')*9;
			for(int j=i+1; j<l-1; j++){
				if(n[j]=='0') tmp1 = (max(0,n[i]-'2'))*9;
				tmp2 = (n[j]-"1")*9;
				for(int ij=j+1; ij<l; ij++){
					if(n[j]=='0'){
						if(n[ij]=='0') ans += (n[i]-'1')*9*9;
						//else ans += (n[i]-'1')*9*(n[ij]-'0');
					}else if(n[ij]=='0') ans += (n[i]-'0')*(n[j]-'1')*9;
					else ans += (n[i]-'0')*(n[j]-'0')*(n[ij]-'0');
				}
			}
		}
	}
	if(k==2){
		for(int i=0; i<l-1; i++){
			for(int j=i+1; j<l; j++){
				if(n[i]=='0') continue;
				if(n[j]=='0') ans += (n[i]-'1')*(n[j]-'0');
				else ans += (n[i]-'0')*(n[j]-'0');
			}
		}
	}
	if(k==1){
		for(int i=0; i<l; i++){
			if(n[i]=='0') continue;
			ans += (n[i]-'0');
		}
	}
	
	printf("%lld\n", ans);
	return 0;
}

