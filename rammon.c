#include "myproshell.h"

/**
 * bfree - fioj iodwqsdfgsdfgdfji wqdiojwqio diowqjd.
 * @ptr: qwdpo kjsiadj sjwioqdjdfsgdfgfdgioqwd iodqiwjdqw.
 * Return: DWuihd iojdopjqw ojdsd ujuiwqcfgsdfgfgsdjiwqdj.
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		actkisero(312528);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

/**
 * _strlen - riu9agsfgsdfgsdiu wiojdioqwd sadij iowqjdwq.
 * @s: oiwjdi wqod iojfdiqgfdfgdsfgwuifhwq dhfqwf.
 * Return: iowjdioj iwqodjugh uiwqhfdgfdgfghhfgfduiqhf.
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}


	while (*s++)
	{
		i++;
	}

	actkisero(312528);
	return (i);
}

/**
 * _strcmp - pigdfgdojdio ioqwdjiowq duihjwquid uijhqdwuiqhwd uihwfudiqwf.
 * @s1: iojdwqoi jwqhfghjfgio uihdwuihwqdijg iqwdjiqw.
 * @s2: ihjwqi ioqjwdiod uihfghfghgfdhhqwguwqgui qwiudiuqwd.
 * Return: ijdijqw iojdwioj odwiojiod qwiogfuwqf uhiqwfd.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		actkisero(312528);
		return (0);
	}

	else
	{
		return (*s1 < *s2 ? -1 : 1);
	}

}
