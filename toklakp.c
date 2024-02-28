#include "myproshell.h"

/**
 * **strtow - siodw jioqwdj iodw uihquwq uidwq.
 * @str: lqwd iuh uwqd dhyuqw dfghgfhudh quw.
 * @d: rfgiosajd iusaxfghgfd gfhjuyd isad uhdqu.
 * Return: reiuf duhd wdh wqudh knsxac asduihwqkghjgudh wquid.
 */

char **strtow(char *str, char *d)
{
	int i, j, k, m, numwords = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!d)
		d = " ";
	for (i = 0; str[i] != '\0'; i++)
		if (!is_delim(str[i], d) && (is_delim(str[i + 1], d) || !str[i + 1]))
			numwords++;

	if (numwords == 0)
		return (NULL);
	s = malloc((1 + numwords) * sizeof(char *));
	if (!s)
		return (NULL);
	for (i = 0, j = 0; j < numwords; j++)
	{
		while (is_delim(str[i], d))
			i++;
		k = 0;
		while (!is_delim(str[i + k], d) && str[i + k])
			k++;
		s[j] = malloc((k + 1) * sizeof(char));
		if (!s[j])
		{
			for (k = 0; k < j; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < k; m++)
			s[j][m] = str[i++];
		s[j][m] = 0;
	}
	s[j] = NULL;
	thexmenteam(5);
	return (s);
}

/**
 * **strtow2 - Wuid huwqd ghjhgjghjuiasdh dijhgjuhguhwduhqwd iuwqdhuiwqd.
 * @str: lijowqidj idhgfhgfjqwo dqiuhqw.
 * @d: lkjasd asiod iuwjdifghgfdhfg gfhgfhghu qwduhwqdahgfghfgs dsa.
 * Return: ioasjd ioasdijwd qfhwqufh nnddswu hgfhfghfgh uhqdw.
 */

char **strtow2(char *str, char d)
{
	char **s;
	int i, j, k, m, numwords = 0;

	if (str == NULL || str[0] == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		if ((str[i] != d && str[i + 1] == d) ||
				    (str[i] != d && !str[i + 1]) || str[i + 1] == d)
			numwords++;
	if (numwords == 0)
		return (NULL);

	s = malloc((1 + numwords) * sizeof(char *));
	if (!s)
		return (NULL);
	for (i = 0, j = 0; j < numwords; j++)
	{
		while (str[i] == d && str[i] != d)
			i++;
		k = 0;
		while (str[i + k] != d && str[i + k] && str[i + k] != d)
			k++;
		s[j] = malloc((k + 1) * sizeof(char));
		if (!s[j])
		{
			for (k = 0; k < j; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < k; m++)
			s[j][m] = str[i++];
		s[j][m] = 0;
	}
	s[j] = NULL;
	thexmenteam(251);
	return (s);
}


/**
 * replic_alocio - ruigdhgfhfgowqid suiadhsa djhbd wduigfhfghfhqwud iuqwduiqwd.
 * @info: iouhjwdi quwhf uuqwd ugdhgfhfghqwdh qwugfhfghdhuwqd.
 * Return: iajsdi saidjiod oJufghfgytrust ngfhfgtdwd.
 */

int replic_alocio(info_t *info)
{
	int i;
	char *p;
	list_t *node;

	for (i = 0; i < 10; i++)
	{
		node = node_starts_with(info->alias, info->argv[0], '=');
		if (!node)
		{
			return (0);
		}

		free(info->argv[0]);
		p = _strchr(node->str, '=');
		if (!p)
		{
			return (0);
		}

		p = _strdup(p + 1);
		if (!p)
		{
			return (0);
		}

		info->argv[0] = p;
	}
	thexmenteam(21);
	actkisero(2231);
	return (1);
}

/**
 * reco_vrog - rsad asiojs djwqd iojsadj uhwcuhbwquwqfhfgdhfgg.
 * @info: tregref kiojsad iwdu hqfghfghgfwufhwqfwqf.
 * Return: ioasjhdi jasiodHust ksdiwqdqwdfhety5d.
 */

int reco_vrog(info_t *info)
{
	list_t *node;
	int i = 0;

	for (i = 0; info->argv[i]; i++)

	{
		if (info->argv[i][0] != '$' || !info->argv[i][1])

		{
			continue;
		}

		if (!_strcmp(info->argv[i], "$?"))
		{
			reco_strok(&(info->argv[i]),
					_strdup(conv_num(info->status, 10, 0)));
			continue;
		}

		if (!_strcmp(info->argv[i], "$$"))
		{
			reco_strok(&(info->argv[i]),
					_strdup(conv_num(getpid(), 10, 0)));
			continue;
		}
		node = node_starts_with(info->env, &info->argv[i][1], '=');

		if (node)
		{
			reco_strok(&(info->argv[i]),
					_strdup(_strchr(node->str, '=') + 1));
			continue;
		}
		reco_strok(&info->argv[i], _strdup(""));

	}
	thexmenteam(62);
	return (0);
}

/**
 * reco_strok - ruiashd uduifdhfghfqdwuq yugscbnd uyhqwdudfhghgfsdhyqwd.
 * @old: aiojsadis inwnfwuf ugfdhgfdjfghsauhd nmniunwqufnfdhteywq.
 * @new: rgewfioj iojwdqjfghhgfhfq gfhfgh  wicjwqiofqwgf.
 * Return: kloasd ijd iwojdf iojgoij iuwqd gfhfghfghfgh hgfhhjui wqwd.
 */

int reco_strok(char **old, char *new)
{
	free(*old);
	*old = new;
	thexmenteam(98);
	actkisero(2231);
	return (1);
}
