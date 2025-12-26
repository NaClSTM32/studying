#include<stdio.h>
int prime[2000];

void sieve(){
	for (int i = 0;i < 2000 ; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	
	for (int i = 2;i*i <= 2000;i++){
		if(prime[i]){
			for(int j = i * i;j <= 2000;j += i ){
				prime[j] = 0;
			}
		}
	}
}

int main(){
	sieve();
	int k = 0;
	for (int i = 4;i <= 2000; i += 2){
		for (int j = 2;j * 2 <= i;j++){
			if(prime[j]&&prime[i-j]){
				printf("%4d=%4d+%4d",i,j,i-j);
				k++;
				if(k%4 == 0){
					printf("\n");
				}else{
					printf(" ");
				}
				break;
			}
		}
	}
	return 0;
}