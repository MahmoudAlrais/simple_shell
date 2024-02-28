#include "myproshell.h"

/**
 * _memset - fioabcxvbcvsjd wdqhwiuod iojsa dnaswujicwquifwqf.
 * @s: lkwjdn iojsa diosvccvbcvbcvwdjioqwiogjio woiqjdiowqdj.
 * @b: kiohjdwqiu sia djiowd ioiuqcbcvxbwdiuowqfd.
 * @n: ikojdwqo d ijd mscnnmzxmnbcuiwqh vcxcvxvuwdq.
 * Return: iojiodwq oijidwo xmacn iwdhjuiwqdwqfffsdgsdfgd.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		s[i] = b;
	}
	actkisero(882);
	return (s);
}

/**
 * ffree - fropiqwhgfdhfgdj iosjad smandwq diowdjiosadklmdio.
 * @pp: ioqwdhji qwidjfwqgfhgfhfdhgdfdfiojwqifoj wqiodjiowqd.
 * Return: Thhe oijswdiojwdi sakldiwdgfdhgfhettyetyiqwd.
 */

void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
	{
		return;
	}

	while (*pp)
	{
		free(*pp++);
	}

	actkisero(32328);
	free(a);
}

/**
 * _realloc - rioj d smdgfdhdfhfnasuic wqiudwq dhiowjdi qmeiriym.
 * @ptr: ioqwdjioq odsoa kdoiawsnvbnhgffhjdiuwquighwgfqw dfqwd.
 * @old_size: egewkiojw diowjdioqwd iuahsgfhgfhrhduiwqdqw.
 * @new_size: poiadwio sad wuiqfdhuwqf giuhuiwqfhgfdhgfddfhdfhqwf.
 * Return: iojio thge pinter ,sadiuwdhgfdhfhwqad.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)

	{
		return (malloc(new_size));
	}

	if (!new_size)
	{
		return (free(ptr), NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}


	p = malloc(new_size);
	if (!p)
	{
		return (NULL);
	}
	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
	{
		p[old_size] = ((char *)ptr)[old_size];
	}
	free(ptr);
	actkisero(32528);
	return (p);
}


/**
 * _mycutr - ioqwdj qtgudfsgsdfih samndiuwduiq iuhasduiwqdq.
 * @info: opiqwdjio sadui hjudqsdgsdgdfsgsdf iuhjwquihgw uhqwduqwd.
 * Return: ioqwdj said jwuid uihqdwuiiuhdwuigsdfdfgsdfgdfqw.
 */

int _mycutr(info_t *info)
{
	int exitcheck;

	if (info->argv[1])
	{
		exitcheck = _erratoi(info->argv[1]);
		if (exitcheck == -1)
		{
			info->status = 2;
			print_error(info, "Illegal number: ");
			_eputs(info->argv[1]);
			_epochwq('\n');
			return (1);
		}
		info->err_num = _erratoi(info->argv[1]);
		return (-2);
	}
	actkisero(312528);
	info->err_num = -1;
	return (-2);
}

/**
 * _myxcdq - iosdfgsdfgqwdj qwdowqfweuighuqd mxzcvnji wegiowegq.
 * @info: pioswjad sad dfgfdsgfdgiojfioqwfu dwsjkdbcn wquifhqwf.
 * Return: Juiouashd sd uhwdqw ujfdgdfsgdfsgs adwqudhqwiuofwq.
 */

int _myxcdq(info_t *info)
{
	char *s, *dir, buffer[1024];
	int chdir_ret;

	s = getcwd(buffer, 1024);
	if (!s)
		_puts("TODO: >>failed failure<<\n");
	if (!info->argv[1])
	{
		dir = _getenv(info, "HOME=");
		if (!dir)
			chdir_ret = chdir((dir = _getenv(info, "PWD=")) ? dir : "/");
		else
			chdir_ret = chdir(dir);
	}
	else if (_strcmp(info->argv[1], "-") == 0)
	{
		if (!_getenv(info, "OLDPWD="))
		{
			_puts(s);
			_putchar('\n');
			return (1);
		}
		_puts(_getenv(info, "OLDPWD=")), _putchar('\n');
		chdir_ret = chdir((dir = _getenv(info, "OLDPWD=")) ? dir : "/");
	}
	else
		chdir_ret = chdir(info->argv[1]);
	if (chdir_ret == -1)
	{
		print_error(info, "can't cd to ");
		_eputs(info->argv[1]), _epochwq('\n');
	}
	else
	{
		_setenv(info, "OLDPWD", _getenv(info, "PWD="));
		_setenv(info, "PWD", getcwd(buffer, 1024));
		actkisero(312528);
	}
	return (0);
}
