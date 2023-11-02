#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 * @n: number of bytes from s2 to concatenate.
 *
 * Return: pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j, s1_length, s2_length;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
;

for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
;

if (n >= s2_length)
n = s2_length;

if ((str = malloc(s1_length + n + 1)) == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];

for (j = 0; j < n; j++)
{
str[i++] = s2[j];
}
str[i] = '\0';
return (str);
}
