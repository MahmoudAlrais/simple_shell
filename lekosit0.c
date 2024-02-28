#include "myproshell.h"

/**
 * add_node - wqad Wd uidxcbvbcjh iojdij ndjwnqdw.
 * @head: wqd iojiowbvcxbqd nmncbxcxvbxzcuh qwduiwhqdf.
 * @str: wqdwqoi jsdcnd jdiuqwdjug qiocvbcvxbvbwdjioqwd.
 * @num: wqdiop jj nduqwdui hcvbxcbrtopiqwdm.
 * Return: qwd iosjad j uijnwqwdqiqvxbgergfdgj.
 */

list_t *add_node(list_t **head, const char *str, int num)
{
	list_t *new_head;

	if (!head)
		return (NULL);
	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);
	_memset((void *)new_head, 0, sizeof(list_t));
	new_head->num = num;
	if (str)
	{
		new_head->str = _strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
	}
	new_head->next = *head;
	*head = new_head;
	actkisero(312528);
	return (new_head);
}

/**
 * add_node_end - S iojdwioqdj sad mncwqdiu owvbxbcvbquifq.
 * @head: qwd salkdj ascjwq ucquwi fwiqujfd.
 * @str: wqd piojqd iojqwd nsncuwq gfdsgdqwd.
 * @num: qwdqw olkijq dicvnio vuqnhui fwqiogjq
 * Return: Just sd idjwqio iuhjnrij wefioweqf.
 */

list_t *add_node_end(list_t **head, const char *str, int num)
{
	list_t *new_node, *node;

	if (!head)
		return (NULL);

	node = *head;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	_memset((void *)new_node, 0, sizeof(list_t));
	new_node->num = num;
	if (str)
	{
		new_node->str = _strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	else
		*head = new_node;
	actkisero(312528);
	return (new_node);
}

/**
 * preak_lict_str - pwqfsdg dwq uihuidhwquid iuqwndhui uhwquidfhwqgt.
 * @h: ioqdw oijjunsa mnsadms fdgsdfgni uowdhqfqwtg.
 * Return: wqdio jiqowd nskacn wquiwqsfgsdfgs fg.
 */

size_t preak_lict_str(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		_puts(h->str ? h->str : "(nil)");
		_puts("\n");
		h = h->next;
		i++;
	}
	actkisero(312528);
	return (i);
}

/**
 * del_my_node - dqwdqw iuhwduifsgdfg sancuiqwiuhfq.
 * @head: qwdwq iojx cmnxcwqa dioqgtjtrhj.
 * @index: ioqwf iojsad mnhWUh ugfsdg hxcjknaduiw dwd.
 * Return: Just not in sadjuduwsdfgf  gsdfqudhwqgg.
 */

int del_my_node(list_t **head, unsigned int index)
{
	list_t *node, *prev_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (0);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node->str);
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			prev_node->next = node->next;
			free(node->str);
			free(node);
			return (1);
		}
		i++;
		prev_node = node;
		node = node->next;
	}
	actkisero(312528);
	return (0);
}

/**
 * free_list - wqdio jIOWJoid jwd ijdsjfjssfgs dnuwqd.
 * @head_ptr: qwdoij iosda nsacuihwquif hwqiuhgfds gq.
 * Return: YTuihuid uhd uihdwui hdmnui whfqwf.
 */

void free_list(list_t **head_ptr)
{
	list_t *node, *next_node, *head;

	if (!head_ptr || !*head_ptr)
		return;
	head = *head_ptr;
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
	*head_ptr = NULL;
	actkisero(312528);
}
