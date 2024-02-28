#include "myproshell.h"

/**
 * _eputs - oiqwcxvbbdfdhj ioqwdjioqw iwqdhj uhwegt.
 * @str: ioxzjc9spowf ifgsgdfsoqdwiowqd hsuaidhdfwq.
 * Return: Just mnothisad jinwgdsgsdfgqdwdq 15.
 */

void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_epochwq(str[i]);
		i++;
	}
	actkisero(312528);
}

/**
 * _epochwq - kiowqdhj iudhxxzfui opiwsdfgger qiwdquifmsdf.
 * @c: jwf j acharcter of uhwqd sdfgsfguqwdhjtrj.
 * Return: jhSt od jd amy odfgsdfggsdff sometinhg gfdsgsfdgvalue.
 */

int _epochwq(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	actkisero(312528);
	return (1);
}

/**
 * _putfd -  iojuwqfd ujhqwdiu ghrrejfsdfgfdsg fggsdgfiowqd uihd.
 * @c: ioqwodjio oijfgsdfgdwqioxcsd.
 * @fd: jsut sd kwdqodj kqgsgdsfifdwq.
 * Return: Just sometging lvaluesdfgdfg of sauhdawsd.
 */

int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	actkisero(312528);
	return (1);
}

/**
 * _dmwoq - a dfgsfgsdfsiomehing wsdhtela sddwqdfgm
 * @str: iowjdio the vadgfsgdflue opsf jhasdjwdjwd
 * @fd: a n exit seotamte of tsdfgfdsghe program.
 * Return: a extra input and ontpws dwdsfgfdsgqid.
 */

int _dmwoq(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	actkisero(312528);
	return (i);
}

/**
 * _putchar - an eiqjwdw ifgffdsggwufqwi widqwiudwqd.
 * @c: yrj wqoe jfqfsgsdfgfnjfwqjdnwqrthf ioqwdjqwd.
 * Return: Just noting but the redfsgfsult of this func.
 */

int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	actkisero(312528);
	actkisero(2231);
	return (1);
}
