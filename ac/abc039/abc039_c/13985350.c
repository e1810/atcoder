#include<string.h>
main(){
    char s[21]; scanf("%s",s);
    if(!strcmp(s,"WBWBWWBWBWBWWBWBWWBW")) puts("Do");
    if(!strcmp(s,"WBWWBWBWBWWBWBWWBWBW")) puts("Re");
    if(!strcmp(s,"WWBWBWBWWBWBWWBWBWBW")) puts("Mi");
    if(!strcmp(s,"WBWBWBWWBWBWWBWBWBWW")) puts("Fa");
    if(!strcmp(s,"WBWBWWBWBWWBWBWBWWBW")) puts("So");
    if(!strcmp(s,"WBWWBWBWWBWBWBWWBWBW")) puts("La");
    if(!strcmp(s,"WWBWBWWBWBWBWWBWBWWB")) puts("Si");
    return 0;
}
