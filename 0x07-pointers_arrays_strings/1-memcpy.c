#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: returns a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n)
	{
		*(dest + (n - 1)) = *(src + (n - 1));
		
		n--;
	}
	
	return (0);
}
