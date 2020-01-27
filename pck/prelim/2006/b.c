#include<stdio.h>
#include<stdlib.h>

typedef struct contry{
        char name[22];
        int point;
} Contry;

// function of comparison to sort
int cmp(const void *a, const void *b){
        return ((Contry *)b)->point -((Contry *)a)->point;
}

int main(void){
	int flag = 0;
        while(1){
                int n, i;
                scanf("%d", &n);
                if(n==0) break;
		if(flag) puts("");
		else flag = 1;

                Contry contries[n];
                for(i=0; i<n; i++){
                        char name[21];
                        int w, l, d;
                        scanf("%s %d %d %d", contries[i].name, &w, &l, &d);
                        contries[i].point = w*3+d;
                }

                qsort(contries, n, sizeof(Contry), cmp);
                for(i=0; i<n; i++){
                        printf("%s,%d\n", contries[i].name, contries[i].point);
                }
        }
        return 0;
}
