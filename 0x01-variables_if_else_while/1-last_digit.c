#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("%d is greater than 5", n);
	else if (n == 0)
		printf("%d is 0", n);
	else 
		printf("%d is less than 6 and not 0", n);
	return (0);
}
