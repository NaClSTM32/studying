#include<stdio.h>
int main(){
    int j = 0;
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n];
    int brr[n];
    getchar();
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    getchar();
    for(int i = 0;i < n;i++){
        scanf("%d",&brr[i]);
    }
    for(int i = 0;i < n;i++){
        if((double)(brr[i]-arr[i])/arr[i]*100 >= m){
            j++;
        }
    }
    printf("%d",j);
    return 0;
}
