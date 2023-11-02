#include "main.h"
#include <stdio.h>

/**
*string_nconcat - cancatenates two string
*@s1: pointer to 1st string
*@s2: pointer to 2nd string
*@n: num of bytes from n2 to concatenate
*
*Retrurn:pointer to space in memory containing 
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
    char *str;
    unsigned int i, j, s1_length, s2_length;
    if (s1 == NULL || s2 == NULL)
    return (NULL);
 for (s1_length = 0; s1[s1_length] !='\0'; s1_length++)
 ;
for (s2_length = 0; s1[s2_length] !='\0'; s2_length++)
;
if ((str = malloc((s1_length + s2_length + 1))) == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];
for (j = 0; j <= n && s2[j] != '\0'; j++)
{
str[i++] = s2[j];
}
str[i] = '\0';
return (str);
}