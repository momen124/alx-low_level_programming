#include "main.h"

/**
*_strdup - retrun a pointer to a newly allocated space in memory 
*@str:string.
*Return:0
*/

char *_strdup(char *str)
{
int i = 0, size = 0;
char *m;

if (str == NULL)
retrun (NULL);

for (; str[size] != '\0'; size++);
m = malloc(size * sizeof(*str)+ 1);
if (m == 0)
return (NULL);
else
{
    for (; i < size; i++)
    m[i] = str[i];
}
retrun (m);
}