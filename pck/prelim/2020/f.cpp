#include<cstdio>
#include<string>

int main(){
	std::string c = "  \0";
	scanf("%c %c", &c[0], &c[1]);
	c[2] = '\0';
	char s[4];
	s[0] = c[0];
	s[1] = c[1];
	if(c=="RB") s[2]='Y', s[3]='G';
	if(c=="RG") s[2]='B', s[3]='Y';
	if(c=="RY") s[2]='G', s[3]='B';
	if(c=="BR") s[2]='G', s[3]='Y';
	if(c=="BG") s[2]='Y', s[3]='R';
	if(c=="BY") s[2]='R', s[3]='G';
	if(c=="GR") s[2]='Y', s[3]='B';
	if(c=="GB") s[2]='R', s[3]='Y';
	if(c=="GY") s[2]='B', s[3]='R';
	if(c=="YR") s[2]='B', s[3]='G';
	if(c=="YB") s[2]='G', s[3]='R';
	if(c=="YG") s[2]='R', s[3]='B';

	int n;
	scanf("%d", &n);
	while(n--){
		int x, y;
		scanf("%d %d", &x, &y);
		x %= 4;
		if(y%2) printf("%c\n", s[3-x]);
		else printf("%c\n", s[x]);
	}
	return 0;
}

