#inclu
#include <ctype.h>
int main(void)
{
	char ch;
	
	printf("Please type a sentence in English:") ;
	
	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
		putchar(ch + 1)
	;
	else
	putchar(ch);
	}
	putchar(ch);
	
	getchar() ;
	
	return 0;
	
}
