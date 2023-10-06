#include <stdio.h>
/*
 * main - function
 *
 * Return: always 0
 */
int main(void){
	char so;
	for(so = 'a' ; so <= 'z' ; so++){
		if (so != 'q' && so != 'e')
		putchar(so);

	}
	putchar('\n');
	return(0);
	}
