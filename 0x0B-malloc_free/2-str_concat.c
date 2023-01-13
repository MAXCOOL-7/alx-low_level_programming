#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
<<<<<<< HEAD
	int i, j, len1, len2, len;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)

	{

		i = 0;

		while (s1[i++] != '\0')
			len1++;
	}

if (s2 != NULL)

	{
=======
int i, j, len1, len2, len;
char *result;
>>>>>>> 446144e5652f470da17b94c10c2c3feda5d87605

len1 = len2 = 0;

if (s1 != NULL)
{
i = 0;
while (s1[i++] != '\0')
len1++;
}

if (s2 != NULL)
{
i = 0;
while (s2[i++] != '\0')
len2++;
}

len = len1 + len2;
result = (char *)malloc(sizeof(char) * (len + 1));
if (result == NULL)
return (NULL);

for (i = 0; i < len1; i++)
result[i] = s1[i];
for (j = 0; j < len2; j++, i++)
<<<<<<< HEAD

result[i]                 = s2[j];
result[len]            = '\0';
=======
result[i] = s2[j];
result[len] = '\0';
>>>>>>> 446144e5652f470da17b94c10c2c3feda5d87605
return (result);
}
