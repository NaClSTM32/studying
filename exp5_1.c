#include<stdio.h>

void input(int *a,int n);
void output(int *a,int n);
double average(int *a,int n);
void max_(int *a,int n);
void min_(int *a,int n);
void search(int *a,int b,int n);
void sort(int *a,int n);




int main(){
	int array[10];
	input(array,10);
	double ave = average(array,10);

	printf("%lf",ave);
	printf("\n");
	
	max_(array,10);
	printf("\n");
	
	min_(array,10);
	printf("\n");

	int b;
	scanf("%d",&b);

	search(array,b,10);
	printf("\n");
	
	sort(array,10);

	output(array,10);

	return 0;
}


void input(int *a,int n){
	int i;
	for(i = 0;i < n;i++){
		scanf("%d",a+i);
	}
}

void output(int *a,int n){
	int i;
	for(i = 0;i < n;i++){
		printf("%d",a[i]);
		if(i != n) printf(" ");
	}
}

double average(int *a,int n){
	int sum = 0;
	int i;
	for(i = 0 ;i < n;i++){
		sum += a[i];
	}
	return (double)sum/n;
}


void max_(int *a,int n){
	int max = a[0];
	int i;
	for(i = 1;i < n;i++){
		if(max < a[i]){
			max = a[i];
			}
	}
	printf("%d",max);
}

void min_(int *a,int n){
	int min = a[0];
	int i;
	for(i = 1;i < n;i++){
		if(min > a[i]){
			min = a[i];
			}
	}
	printf("%d",min);
}

void search(int *a,int b,int n){
	int i;
	for(i = 0;i < n;i++){
		if(b - a[i] < 1e-4){
			printf("%d",i);
			return;
		}
	}
}

void sort(int *a,int n){
	int i;
	int j;
	int temp;
	for(i = 0;i < n - 1;i++){
		for(j = 0;j < n - i -1 ;j++){ 
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}


