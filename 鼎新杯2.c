#include<stdio.h>
int main(){
    int m,n,k,r;
    scanf("%d%d%d%d",&m,&n,&k,&r);
    int j = 0;
    int c = 0;
    int arr[k];
    int brr[k];
    for (int i = 0;i < k;i++){
        scanf("%d%d",&arr[i],brr[i]);
    }
    for (int p = 1;p <= n;p++){
        for (int q = 1;q <= m;q++){
            for (int i = 0; i < k;i++){
                if((p - arr[i])*(p - arr[i])+(q - brr[i])*(q - brr[i]) > r*r){
                    j++;
                }
                if(j == k){
                    c++;
                }
            }
        }
    }
    printf("%d",c);
    return 0;
}
