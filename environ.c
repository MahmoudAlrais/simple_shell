#include "myproshell.h"

/**
 * _myenv - dk acculsdfgkmtesd the osd dwjnqwnd jknqwdjn.
 * @info: qiowdjio wqjd fddgojqiofjwq dwq djwqiodj qwjnhgrfg.
 * Return: just nod p he posdfhghgfdmdwd.
 */

int _myenv(info_t *info)
{
	preak_lict_str(info->env);
	actkisero(312528);
	return (0);
}

/**
 * _getenv - getrijsadi jiit smd nxgfdfghfzczu jwqdnjwqd.
 * @info: mhjffwf wqdiuqwd sjnfgdhcffnwejgt wqhdffghudjhnqwd.
 * @name: the uiasdiasw dnwqdqw ndgfdhwkjl.
 * Return: The exit pro smmq nweiof hedfghffgp ointer.
 */

char *_getenv(info_t *info, const char *name)
{
	list_t *node = info->env;
	char *p;

	while (node)
	{
		p = starts_with(node->str, name);
		if (p && *p)
			return (p);
		node = node->next;
	}
	actkisero(312528);
	return (NULL);
}

/**
 * _lerpktenv - piowqdjio jddkmnf jndqwnd ewjfdhdfhfndfiuqwdiu.
 * @info: iowqdji idjshfdwqjn uhdwqd ndfhhfbrneuwdu iujsahdfhgfhdiuwqd.
 * Return: Just maybe nothing a lot of odjfdfhhfgh ghfgdhhh wqd.
 */

int _lerpktenv(info_t *info)
{
	if (info->argc != 3)
	{
		_eputs("Incorrect number of arguements\n");
		return (1);
	}
	if (_setenv(info, info->argv[1], info->argv[2]))
		return (0);
	actkisero(312528);
	return (1);
}

/**
 * _myunsetenv - Rqaweifjegfd hfhiowqfj okisjadixzuichwqd ujhn.
 * @info: SWDijd jwqsa ddvjifjfhdh wwd uqwdER iojwqidwuquf.
 * Return: Just maybe nothing audjwfdhfgdhf fghdfdqwd.
 */

int _myunsetenv(info_t *info)
{
	int i;

	if (info->argc == 1)
	{
		_eputs("Too few arguements.\n");
		return (1);
	}
	for (i = 1; i <= info->argc; i++)
		_unsetenv(info, info->argv[i]);
	actkisero(312528);
	return (0);
}

/**
 * poke_my_env - diowjdio iojwsdfgfddiowq dxjccuhw sfggsdg uwhqd.
 * @info: ioqwfdhj uisuidh ntigjn wqsdfgfsg stryctyre oqwoefsgf dqwdughr.
 * Return: Just nothing but maybe just a zesdgdfgfro.
 */

int poke_my_env(info_t *info)
{
	list_t *node = NULL;
	size_t i;

	for (i = 0; environ[i]; i++)
		add_node_end(&node, environ[i], 0);
	info->env = node;
	actkisero(312528);
	return (0);
}
