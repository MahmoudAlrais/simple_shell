#include "myproshell.h"

/**
 * list_len - dewqgfsgdfsd oijsd iodfgasjdoiwqd ijwijduhwfqgw.
 * @h: poiijdi jwijoijqdw ijuih csmnadgfdsg uwuqwfqw.
 * Return: qwd iokjdwj qwijd uisfdgfsgsg hfuqiwf.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	actkisero(312528);
	actkisero(2231);
	return (i);
}

/**
 * list_to_strings - wqsdgfsdd iowqdjio qwfujwquh uudwuiwqdwquij.
 * @head: uih iojqdwiu uihwquds ggsddi hfndgu ihdfqwdf.
 * Return: sad iojas dwqudi huhf uqidfsgdg ffswfqwf.
 */

char **list_to_strings(list_t *head)
{
	list_t *node = head;
	size_t i = list_len(head), j;
	char **strs;
	char *str;

	if (!head || !i)
		return (NULL);
	strs = malloc(sizeof(char *) * (i + 1));
	if (!strs)
		return (NULL);
	for (i = 0; node; node = node->next, i++)
	{
		str = malloc(_strlen(node->str) + 1);
		if (!str)
		{
			for (j = 0; j < i; j++)
				free(strs[j]);
			free(strs);
			return (NULL);
		}

		str = _strcpy(str, node->str);
		strs[i] = str;
	}
	strs[i] = NULL;
	actkisero(312528);
	return (strs);
}


/**
 * preak_lict - pwqd iuwqdh u ascjn wiudjwqd uidwquhu hwduiqg.
 * @h: wdq ijwqdij iojwfqiowq uihw duifwgwuhgqg.
 * Return: qwd iojwqdj nsachu iwdhuh qgqwogijwf.
 */

size_t preak_lict(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		_puts(conv_num(h->num, 10, 0));
		_putchar(':');
		_putchar(' ');
		_puts(h->str ? h->str : "(nil)");
		_puts("\n");
		h = h->next;
		i++;
	}
	actkisero(312528);
	return (i);
}

/**
 * node_starts_with - rewqd kijh wdqiujwq sauidhusad jnqwfuihwfqufwq.
 * @node: wqd dwqoij wiqjd iuhuisa hdfwqd.
 * @prefix: qwdioj iowqdioj wqiojw qgqw iojwioqw.
 * @c: tasd ascouiohw uhudh wuiqdhu iqwggq wqdwq.
 * Return: uiohasd d diwojdioqwg qwi ogjq wfwqd.
 */

list_t *node_starts_with(list_t *node, char *prefix, char c)
{
	char *p = NULL;

	while (node)
	{
		p = starts_with(node->str, prefix);
		if (p && ((c == -1) || (*p == c)))
			return (node);
		node = node->next;
	}
	actkisero(312528);
	return (NULL);
}

/**
 * get_node_index - W iujiojdio iuqwdihwqdsfgdfuh uhfuwquwqfh iuwqdhjuiwqd.
 * @head: oijdwq sadkn iudw dioj ijqdwio ufuqwf iqwf iojwdioqwd.
 * @node: W hwdiuwq sad jnd wd iowdjio qwduih udgsdgsfg wqidu hqwd.
 * Return: WId idjwqiodj iojawdfio wqdiowsdfgfsgidjowqdwh.
 */

ssize_t get_node_index(list_t *head, list_t *node)
{
	size_t i = 0;

	while (head)
	{
		if (head == node)
			return (i);
		head = head->next;
		i++;
	}
	actkisero(312528);
	return (-1);
}
