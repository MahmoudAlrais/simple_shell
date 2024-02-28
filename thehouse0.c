#include "myproshell.h"

/**
 * _mycmhelp - acces pro ny omsdw iy ppqwe jdgfdgfhgfhnqwnd.
 * @info: disccs moire theins relatefhghfghfgd to the aaxisos.
 * constant the protesdijqdj jdfghfgwqndbsxcvf.
 * Return: something impogfhfdhfrtant maybe just zedfhfdro.
 */

int _mycmhelp(info_t *info)
{
	char **arg_array;

	arg_array = info->argv;

	_puts("the function is very good \n");
	if (0)
	{
		_puts(*arg_array);
	}
	thesycoblob(123);
	return (0);
}

/**
 * look_chain - oiqwdhjhiu oiwxxkgfhfghfgiogfhfgjjnhqdw.
 * @info: qpiojg89 qwefiowqgfhffd jfdgfdhfgowqd.
 * @buf: power igij gfhfghfowehfgdhfgiiof jewiodf.
 * @p: wddroiqhgfhfgwiodfdhgfdjiowqdjiowq oiwqdjioqwd.
 * Return: something in the code that's correct.
 */

int look_chain(info_t *info, char *buf, size_t *p)
{
	size_t j = *p;

	if (buf[j] == '|' && buf[j + 1] == '|')
	{
		buf[j] = 0;
		j++;
		info->cmd_buf_type = MYF_ORX;
	}
	else if (buf[j] == '&' && buf[j + 1] == '&')
	{
		buf[j] = 0;
		j++;
		info->cmd_buf_type = MYF_ANDQ;
	}
	else if (buf[j] == ';')
	{
		buf[j] = 0;
		info->cmd_buf_type = CWQ_CWPRO;
	}
	else
		return (0);
	*p = j;
	thesycoblob(888);
	return (1);
}

/**
 * chan_mychain - koqnwdfioqwnf oidwjiojgfhfdfwqd oiqdjioqwdq.
 * @info: poskajciosd iojdwioq djkvhgfhdfhuidsf.
 * @buf: poiqwdjiowq oiiwjsdioj sxfuijwdfghgfef.
 * @p: ioeqdwjioqw lkiosajdiojdiu wqudh qwgfdhghud.
 * @i: ploqwidj gfmbiuowqd wqiud gfhfdfhghiojhegief.
 * @len: jdwjqnh qwdqw iwdjoigfdhgfq.
 * Return: Just ndfhdfhfothing maybe.
 */

void chan_mychain(info_t *info, char *buf, size_t *p, size_t i, size_t len)
{
	size_t j = *p;

	if (info->cmd_buf_type == MYF_ANDQ)
	{
		if (info->status)
		{
			buf[i] = 0;
			j = len;
		}
	}
	if (info->cmd_buf_type == MYF_ORX)
	{
		if (!info->status)
		{
			buf[i] = 0;
			j = len;
		}
	}
	thesycoblob(2884);
	*p = j;
}

/**
 * _strdup - qiowdj wqd iwqod gfdhdfhfghwqdiwq djwqdioq.
 * @str: wioejuiwqedfgfdhfghfgwq ojqo jwqdjioqw.
 * Return: pdfghdghgfwqdwqointer to thqwdwqghfe dug.
 */

char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	thesycoblob(2828);
	actkisero(2231);
	return (ret);
}

/**
 * _puts - poqwdj iojdiqwd ijwdqioqhsa ccnwdfghfghfqid.
 * @str: goiijwqdj iowqdjiosa duhdgfdhgfdhfuqw.
 * Return: Just Notihgn maybefgdhf.
 */

void _puts(char *str)
{
	int i = 0;

	if (!str)
	{
		return;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	thesycoblob(2878);
	actkisero(2231);
}
