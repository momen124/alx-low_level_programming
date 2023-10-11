#include "main.h"

/**
 * numLength - retruns the lenght of string
 * @num: operand number.
 *
 * Return: number of digits
 */
int numLength(int num)
{
int length = 0;
if (!num)
return (1);
while (num)
{
num = num / 10;
length += 1;
}
return (length);
}
/**
 * main - Entry point
 *
 * Description: prints the first 98 fibonacci numbers.
 *     starting with 1 and 2 followed 
 * Return: number of digits
 */
int main(void)
{
int count, initialos;
unsigned long f1 = 1 , f2 = 2 , sum , mx = 100000000 , f1o = 0 , f2o = 0 , sumo = 0 ;
for (coount = 1; count <=98; count++)
{
if (f1o > 0)
printf("lu", f1o);
initialos = numLength(mx) - 1 - numLength(f1);
while (f1o >0 && initialos > 0)
{
printf(%d",0);
initialos--;
}
printf("%lu",f1);
sum = (f1 + f2) % mx;
summo = f1o + f2o + (f1 + f2) / mx;
f1 = f2;
f1o = f2o;
f2 = sum ; 
f2o = sumo;
if (count !=98)
printf(",");
else
printf("\n");
}
return (0);
}
