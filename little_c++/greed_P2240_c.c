#include<stdio.h>

int main(){
    int n,t;
    scanf("%d %d",&n,&t);
    struct {
        int m;
        int v;
        double p;
    } w[102],temp;
    
    for(int i = 0;i < n;i++){
        scanf("%d %d",&w[i].m,&w[i].v);
        w[i].p = (double)w[i].v / w[i].m;
    }

    for(int i = 0;i < n-1;i++){
        int k = i;
        for(int j = i+1;j < n;j++){
            if (w[k].p < w[j].p){
                k = j;
            }
        }
        temp = w[i];
        w[i] = w[k];
        w[k] = temp;
    }

    int t2 = 0;
    double ans = 0;
    int j = 0;
    for(j = 0;j < n && t2 <= t;j++){
        t2 += w[j].m ;
        ans += w[j].v;
    }

    j--;
        if(t2 > t){
        ans -= w[j].v;
        t2 -= w[j].m;
        
        ans += w[j].p * (t - t2);
        }
    
    
    printf("%.2lf",ans);
    return 0;
}