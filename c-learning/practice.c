#include<stdio.h>
int fun(int a,int b,int r[]);
int count = 0;

int main(){
int num[1000];
int a,b;

scanf("%d%d",&a,&b);
printf("%d",fun(a,b,num));
for(int i = 0;i < count;i++){
printf(" %d",num[i]);}
return 0;
}


int fun(int a,int b,int* r){
int j = 0;
for(int i = a;i <= b;i++){
if ((i%7 == 0 ||i%11 == 0)&& i%77 != 0){
count++;
*(r+j) = i;
j++;}
}
return count;
}