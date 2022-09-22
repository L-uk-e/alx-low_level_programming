#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: size to be copied
 *
 * Return: pointer to dest in main
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, x = 0;

	/* Get number of bytes in i */
	while (*(dest + i) != '\0')
	{
		i++;
	}

	/* Case when dest is more than or equal to incoming src */
	if (i > n)
	{
		while ((x < n) && (*(src + x) != '\0'))
		{
			*(dest + x) = *(src + x);
			x++;
		}

	}

	/* Case when dest is less than incoming src */ 
	else if (i < n)
	{
		while ((x < n) && (*(src + x) != '\0'))
		{
			*(dest + x) = *(src + x);
			x++;
		}

		while (x < n)
		{
			*(dest + x) = '\0';
			x++;
		}
		
		
	}
	else
	{
		while ((x < n) && (*(src + x) != '\0'))
		{
			*(dest + x) = *(src + x);
			x++;
		}

		*(dest + x) = '\0';
	}
		

	return (dest);
}
