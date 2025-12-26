#include<stdio.h>
#define m 100005
int main(){
    int n;
    scanf("%d",&n);
    int s,t;
    scanf("%d%d",&s,&t);
    int a[m];
    for(int i = 0;i < n;i++){
        scanf("%d%d",&a[i]);
    }

    long long p = -1;
    double value[1000000000000000000] = {0};
    for(int i = 0;i <n;i++){
        for (int j = 0; j <n;j++){
            long long sum = 0;
            for(int k = j ; k < j + i; k++){
                sum += a[k];
                p++;
            }
            value[p] = (double)(sum/i);
        }
    }

    //ÅÅÐò
    for (int i = 0;i <= p;i++){
        for (int j = 0;j < p;j++){
            if(value[j] > value[j+1]){
                int temp = value[j+1];
                value[j+1] = value[j];
                value[j] = temp;
            }
        }
    }

    printf("%.3lf",value[p]);
    return 0;

}
