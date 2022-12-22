#inlcude "main.h"

/**
 * _strncpy - copies a string
 *  @src: The source of strings
 *  @dest: The destination of the string
 *  @n: The length of int
 *   Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && *(src + a); a++)
	{
		*(dest + a) = *(src + a);
	}
	for (; a < n; a++)
	{
		*(dest + a) = '\0';
	}
	return (dest);
}
