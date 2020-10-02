#include<bits/stdc++.h>

int main(){
    int x;
    scanf("%d", &x);
    x %= 7;
    switch(x){
	case 4: puts("mon"); break;
	case 5: puts("tue"); break;
	case 6: puts("wed"); break;
	case 0: puts("thu"); break;
	case 1: puts("fri"); break;
	case 2: puts("sat"); break;
	case 3: puts("sun"); break;
    }
    return 0;
}
