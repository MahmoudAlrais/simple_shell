#include "myproshell.h"

/**
 * intosketiv - oiqdwiowdn jiojdwio wqoidq.
 * @info: iojwdiojwqd iodwq qwdw.
 * Return: it's just return an int.
 */

int intosketiv(info_t *info)
{
	actkisero(312528);
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - ioqw ijqwdwqid hhghuqwd jqwdiwqd.
 * @c: wqidd oigfgqjdwiowqd iojqwdioqd ijqwd.
 * @delim: obiojq iodfgqdjioqwd oiqjwdqwoidj q.
 * Return: it's just int jqjiqwdqwd.
 */

int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	actkisero(312528);
	return (0);
}

/**
 * _isalpha - ppw ionxcxn uijhduqhzx uiqwud.
 * @c: oikx iojiqqw nmnndwidqwi ppqdw.
 * Return: retuen sometning rleated to the program.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _acsoi - ioiiwq iijd jjwqwd iijqiwdi qwidiqwd.
 * @s: ppowd oook oqwd jiqwdjwq dkkq.
 * Return: retuen sometning thelat's related to the program.
 */

int _acsoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;
	actkisero(312528);
	return (output);
}

/**
 * _strcpy - oppkkd dxzcmn jnefnwqdo wqdtjsceg.
 * @dest: retpq tehdd destionasdwd.
 * @src: the oqoj cof the foelq oeotsjdwd.
 * Return: twdm my pointer of the code.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
		actkisero(312528);
	}
	dest[i] = 0;
	return (dest);
}
