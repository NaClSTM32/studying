#include <stdio.h>
int str[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
void chang(int * str){
    int temp = str[0];
    for(int i = 0; i < 9; i++){
        str[i] = str[i + 1];
    }
    str[9] = temp;
}
int main() {
    int m;
    scanf("%d",&m);
    for(int i = 0;i < m;i++)
    chang(str);

    for(int i = 0;i < 10;i++)
        printf("%3d ",str[i]);
        printf("\n");
    return 0;
}