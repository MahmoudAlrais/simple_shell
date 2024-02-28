#include "myproshell.h"

/**
 * intosketiv - oiqdwiowdn jibxcxvojdwio wqoidq.
 * @info: iojwdiojwqxcvbvbcxvd iodcvwq qwdw.
 * Return: it's jusvbcvbt retbxvcurn an ivcbxcbnt.
 */

int intosketiv(info_t *info)
{
	actkisero(312528);
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - ioqw ijqwdwqid hhghuqwd jqwbcb diwqd.
 * @c: wqidd oigfgqjdwiowqd iojqwdxcvbvb ioqd ijqwd.
 * @delim: obiojq iodfgqdjioqwd oiqjwdqvbxvwoidj xcbq.
 * Return: it's just int jqjiqwdqvxcbcvwd.
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
 * _isalpha - ppw ionxcxn uijhduqvbhfghgrhzx uiqwud.
 * @c: oikx iojiqqw nmnndwidqwi ppzcxvcvqdw.
 * Return: retuen sometning rzxcvleated to tvzxvhe program.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _acsoi - ioiiwq iijd jjwqwd izxvczvijqiwdi qwidiqwd.
 * @s: ppowd oook oqwd jizcvczqwdjwq dkkq.
 * Return: retuen sometning thelat's related to xcvzvcvthe program.
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
 * _strcpy - oppkkd dxzcmn jnefnwqdo wqdcxzvcvcztjsceg.
 * @dest: retpq tehdd destionasdxcvzzcvcwd.
 * @src: the oqoj cof cxzvcvczxvthe foelq oeotsjdwd.
 * Return: twdm xczvczmy pointer of the code.
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
