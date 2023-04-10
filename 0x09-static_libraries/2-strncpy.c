#include "main.h"

/**
* _strncpy - copy a string
* @dest: input value
* @src: input value
* @n: input value
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int j;

for (j = 0 ; j < n && src[j] != '\0' ; j++)
{
dest[j] = src[j];
}

while (j < n)
{
dest[j] = '\0';
j++;
}

return (dest);
}
