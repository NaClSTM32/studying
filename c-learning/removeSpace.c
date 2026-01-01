#include<stdio.h>
int main(){
    char str[10000];
    gets(str);
    char *p, *q;
    p = str;
    q = str;
    while(*p != '\0'){
        if(*p != ' '){
            *q = *p;
            q++;
        }
        p++;
    }
    *q = '\0';
    puts(str);
    return 0;
}