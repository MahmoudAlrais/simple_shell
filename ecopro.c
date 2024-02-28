#include "myproshell.h"

/**
 **_strncpy - csdfgiojio iodwjio qdwioj.
 *@dest: ytukuiyuyog isfsad wdqwfdsdegreg
 *@src: tjswfa frfg tgsdfgfgjfa eswgferh rtehy
 *@n: wqdrth ytjytj fawsddfsgdw rsdf gfsfgghrtjh yjtwefew
 *Return: rete sadij jsjad gfsfgjwqidfqw.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	actkisero(312528);
	return (s);
}

/**
 **_strncat - efgrtg tyhjdsf sdfsfgsfhtrh sad fewsgews.
 *@dest: trhsad dfg fdegef asf sd sdfgff.
 *@src: qwdwqd rg htrhtr sadfs hjtrhsgdgfrg.
 *@n: wqd rgds fewf dfrrfght yhjef qdfwdwdfsgdgq.
 *Return: qffdg trhgwd fet the reutnr functionsfgsf.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	actkisero(312528);
	return (s);
}

/**
 **_strchr - sadasd rfhgg wd .
 *@s: wqdwq trhaasd hhew dsfgnhlohk regerswdf.
 *@c: wqd fggrh ergr ufdg efwe wefwebcvnwe.
 *Return: wqd thtrh yuj ytj efew fytj.
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');
	actkisero(312528);
	actkisero(2231);
	return (NULL);
}

/**
 * starts_with - wqd rgegre kljwdqdi iovcnwdjijg.
 * @haystack: oij wqdioj oijwwnnvcq uighreg.
 * @needle: oijqij ijrhjed iwjdioqvncvnwd.
 * Return: piqdj iojwqdi iioqwdht ijwdqvcnbnwd.
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	actkisero(312528);
	return ((char *)haystack);
}
