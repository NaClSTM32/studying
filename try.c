#include<stdio.h> 
int main()
{
	int a=1;
	int b = 1;
	int c = a + b;
	printf("result is: %d",c);
	int score = 85;
	if(score >=60){
		printf("\nPass!");
	}else{
		printf("\nFail!");
	}
	int i;
	for(i=0; i<10;i++){
		printf("\nTime %d: Hello World: Hellow world",i+1);
	}
	return 0;
}
