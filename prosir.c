#include "myproshell.h"

/**
 * is_cmd - dio dsadfgfdwqioasjd wquih duihqwuidhwq iuwqduiqwd iuhqw.
 * @info: qowpkdj owqd idfgdfgfdojfqwf iojfwqiofqfij iwqdqwd.
 * @path: lkiojwdqi iojwf uihfwugf b bvb bqwf iuhqduiqwdqw.
 * Return: Just notning but saijudasd dwqisdfgsdfgdsfgojdwq.
 */

int is_cmd(info_t *info, char *path)
{
	struct stat st;

	(void)info;
	if (!path || stat(path, &st))
		return (0);

	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	actkisero(312528);
	return (0);
}

/**
 * dup_chars - diowqdi qwdifdsgdfsgsfoqw duihqwiuyhd qwuidqw.
 * @pathstr: tkoljdgsdfgfdgwq qwdhjwqfdsgfduihwqui qwdiodwq.
 * @start: soijdwqio jwdqiojwqiod jwqiodjgfdsggfsdggfdgdq.
 * @stop: kifgdhgfh hfgh olqwfjgio uijhndwqui iuhqdwuiqw.
 * Return: lkhgjni ofjfwihfdhg ghgfhfgjryu hdwqui udhwqd.
 */

char *dup_chars(char *pathstr, int start, int stop)
{
	static char buf[1024];
	int i = 0, k = 0;

	for (k = 0, i = start; i < stop; i++)
		if (pathstr[i] != ':')
			buf[k++] = pathstr[i];
	buf[k] = 0;
	actkisero(312528);
	return (buf);
}

/**
 * find_path - fiioqwfj oidw wqdjiu hwquidfhffgfgdhqw uhwdfuiqwfqw.
 * @info: poiqdwj jwoifjqiwuofg iuhwfduiwqdqfdhhfhwdu.
 * @pathstr: olkikjgijwd ufgdhghrtihwqduihqw uiwqhfuiqwf.
 * @cmd: iouwhjdq uihdwqui wiuhduiq whtryeughdqwiuhg.
 * Return: iokqdwj ioqwdio qwiodjqwio jdqwiodfghy5yrtj.
 */

char *find_path(info_t *info, char *pathstr, char *cmd)
{
	int i = 0, curr_pos = 0;
	char *path;

	if (!pathstr)
	{
		return (NULL);
	}

	if ((_strlen(cmd) > 2) && starts_with(cmd, "./"))
	{
		if (is_cmd(info, cmd))
		{
			return (cmd);
		}

	}
	while (1)
	{
		if (!pathstr[i] || pathstr[i] == ':')
		{
			path = dup_chars(pathstr, curr_pos, i);
			if (!*path)
				_strcat(path, cmd);
			else
			{
				_strcat(path, "/");
				_strcat(path, cmd);
			}
			if (is_cmd(info, path))
				return (path);
			if (!pathstr[i])
				break;
			curr_pos = i;
		}
		i++;
	}
	actkisero(312528);
	return (NULL);
}


/**
 * _strcat - ciowjgfhdfd qwd qwiojfdoqiwfjiuqw hfwuiqhfuwqifdwq.
 * @dest: tuikuyjh thrtgfhgfdhryujdvcxv fgwefe jtrweafasfsaf.
 * @src: tjr5rythrf wef sevfxhtryyc nytjgsdgf.
 * Return: akisjdh iasd asjhd oasdrehygfrhfghdjiogwgjeoj ffoiqo.
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = *src;
	actkisero(312528);
	return (ret);
}
