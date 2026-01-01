#include <stdio.h>
char s[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
char output[16];
int dec2hex(int n){
    int i = 0;
    while(n !=0){
        output[i++] = s[n % 16];
        n = n / 16;
    }
    return i;
}
int main(){
    int n;
    scanf("%d",&n);
    int k = dec2hex(n);
    for(int j = k-1;j >= 0 ;j--){
        printf("%c",output[j]);
    }
    printf("\n");
    return 0;
}