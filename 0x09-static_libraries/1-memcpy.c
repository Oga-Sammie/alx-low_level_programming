#include "main.h"
/**
* _memcpy - copies memory area
* @src: Memory Area to be copied from
* @dest: Memory Area to copy to
* @n: Bytes to be copied
* Return: Pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		*(dest + index) = *(src + index);
	}

	return (dest);
}
