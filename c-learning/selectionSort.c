#include <stdio.h>

void sort(int * a,int n);

int main(){
    int arr[10];
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr ,n);
    for(int i = 0;i < n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
    return 0;
}


void sort(int * a, int n){
    int temp;
    int k;
    for(int i = 0;i < n - 1;i++){
        temp = a[i];
        k = i;
        for(int j =i + 1;j < n;j++){
            if(a[k] > a[j]){
                k = j;
            }
        }
        a[i] = a[k];
        a[k] = temp;
    }
}