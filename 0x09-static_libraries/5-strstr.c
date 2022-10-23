#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String to be searched
 * @needle: String occurence to be looked for in haystack
 *
 * Return: A pointer at the begging of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, y = 0;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		if (*(haystack + x) == (*(needle + y)))
		{
			while (*(needle + y) != '\0')
			{
				y++;
			}
		}
	}
	
	return ('\0');
}
