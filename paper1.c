#include <stdio.h>
#include <string.h>
char st[100];
int main(){
	int i;
	scanf("%s",st);
	for(i = 0 ;st[i] ; i++){
		if('a' <= st[i] && st[i] <= 'z')
		st[i] -= 1;
	}
	printf("%s\n",st);
	return 0;
} 
