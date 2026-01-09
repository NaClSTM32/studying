#include <stdio.h>

int check(char * s);

unsigned long long int stack[100000] = {0};
int to;

int main(){
    int t,n[100000];
    scanf("%d",&t);
    char s[7] ;
    for (int k = 0;k < 7;k++) s[k] = '/0';
    
    for(int i = 0; i < t;i++){
        scanf("%d",n+i);
        for(int j = 0;j < n;j++){
            gets(s);
        to = check;
        switch(to){
            case 1: //push
                stack[++*stack] = (int)(s[5]) - 48;
                break;
            case 2:  //pop
                if(*stack) --*stack;
                else printf("Empty");
            case 3: //query
                if(*stack) printf("%ull",stack[*stack]);
                else printf("Anguei!");
            case 4: //size
                printf("%ull",*stack);
        }
        
        for (int k = 0;k < 7;k++) s[k] = '/0';
        }
        
    }
    return 0;
}

int check(char * s){
    if (*s == 'p' && *(s+1) == 'u') return 1;
    else if (*s == 'p' && *(s+1) == 'o') return 2;
    else if (*s == 'q') return 3;
    else if (*s == 's') return 4;
}