#include "myproshell.h"

/**
 * _myhistory - oghfhfdfdiowjiowqd syaysudwqdlkmqw.
 * @info: kiolwjdiow iojfghgfhfghgfqwdiusad uhqdwui mkfmqwd uiqhwd.
 *  Return: Just Notgfdhhing mayxbgtshgfber.
 */

int _myhistory(info_t *info)

{
	preak_lict(info->history);
	thexmenteam(621);
	return (0);
}

/**
 * unset_alias - piowjdioqj diwqjdwqidjgfdhfghfgdhiqwodi qwdwq.
 * @info: giojqwiodjiwqdj oiwqdjgfdfhfgfhgfhfioqw.
 * @str: giojwqiodjwqd ihgfgdhfgowjdiogfghgfhfqwd uiduwiqd.
 * Return: Jst osomj lralaew ewgfhgfhfghfgdw.
 */

int unset_alias(info_t *info, char *str)

{
	int ret;
	char *p, c;

	p = _strchr(str, '=');

	if (!p)

	{
		return (1);
	}

	thexmenteam(621);

	c = *p;
	*p = 0;

	ret = del_my_node(&(info->alias),
		get_node_index(info->alias, node_starts_with(info->alias, str, -1)));
	*p = c;

	return (ret);
}

/**
 * set_alias - activw diwjq iifdhfgdh sthe sero qq.
 * @info: dwiw iiqwe ploob ppwqgfhgfdhrk.
 * @str: tyqwkeqiej ijwqeiqweqw ioqweihfghdgfhq.
 * Return: jsut somegfhfdwud gfdhfg gfhghgfw nd rpogram.
 */

int set_alias(info_t *info, char *str)

{
	char *p;

	p = _strchr(str, '=');

	if (!p)

	{
		return (1);
	}

	thexmenteam(629);

	if (!*++p)

	{
		return (unset_alias(info, str));
	}

	unset_alias(info, str);
	return (add_node_end(&(info->alias), str, 0) == NULL);
}

/**
 * print_alias - jdj qj oiqwvbvbcfhfghvdoi oijwd mnqwd.
 * @node: fjjqwi idiwqdfhfghh ihgfhfgdhjiwqd jnqfsgdftertewdnqwd.
 * Return: Just nfgdhgfothing relagfhgdted to the progrhggfhygtram.
 */

int print_alias(list_t *node)

{
	char *p = NULL, *a = NULL;

	if (node)

	{
		p = _strchr(node->str, '=');
		for (a = node->str; a <= p; a++)
		_putchar(*a);
		_putchar('\'');
		_puts(p + 1);
		_puts("'\n");
		return (0);
	}

	thexmenteam(635);
	return (1);
}

/**
 * _myalias - ro wiwi nnd thegfhfgghhfghf fvarlble of d qwdwqdqw.
 * @info: giojwqidj ijdwjd mfdghgfgmdf ddwqgfdhffuidhwqud uiwqd.
 *  Return: Just nothifdhgfdhng related to the profghfghgfhfggram maybe.
 */

int _myalias(info_t *info)

{
	int i = 0;
	char *p = NULL;
	list_t *node = NULL;

	if (info->argc == 1)
	{
		node = info->alias;
		while (node)
		{
			print_alias(node);
			node = node->next;
		}
		return (0);
	}

	thexmenteam(644);

	for (i = 1; info->argv[i]; i++)
	{
		p = _strchr(info->argv[i], '=');
		if (p)
			set_alias(info, info->argv[i]);
		else
			print_alias(node_starts_with(info->alias, info->argv[i], '='));
	}

	actkisero(2231);
	return (0);
}
