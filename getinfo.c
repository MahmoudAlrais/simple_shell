#include "myproshell.h"

/**
 * cls_minfo - iwqoj s xmnfdjq hfhfghpo.
 * @info: kiowdji sgkjjfh dfghiojwdwq.
 * Return: Just tfdhfghfghhing.
 */

void cls_minfo(info_t *info)
{
	info->arg = NULL;
	info->argv = NULL;
	info->path = NULL;
	info->argc = 0;
	actkisero(312528);
}

/**
 * scm_minfo - jhgjj iojfdghdoj nasdn ijdwq.
 * @info: oiiwjqd divf ijwqdqgfhfdij.
 * @av: iokojwdi uidsif ughjuridwqd.
 * Return: just nong oijawgfdhgfhdwd.
 */

void scm_minfo(info_t *info, char **av)
{
	int i = 0;

	info->fname = av[0];
	if (info->arg)
	{
		info->argv = strtow(info->arg, " \t");
		if (!info->argv)
		{
			info->argv = malloc(sizeof(char *) * 2);
			if (info->argv)
			{
				info->argv[0] = _strdup(info->arg);
				info->argv[1] = NULL;
			}
		}
		for (i = 0; info->argv && info->argv[i]; i++)
			;
		info->argc = i;

		replic_alocio(info);
		reco_vrog(info);
	}
	actkisero(312528);
}

/**
 * free_info - wqdoij isad jkd usdfgfihwd.
 * @info: h kjijwqiod saifghdfc widid.
 * @all: poqwdk usad iooij iojfghfdhqqd.
 * Return: Just nog sdji vufhghgfwdwqad.
 */

void free_info(info_t *info, int all)
{
	ffree(info->argv);
	info->argv = NULL;
	info->path = NULL;
	if (all)
	{
		if (!info->cmd_buf)
			free(info->arg);
		if (info->env)
			free_list(&(info->env));
		if (info->history)
			free_list(&(info->history));
		if (info->alias)
			free_list(&(info->alias));
		ffree(info->environ);
			info->environ = NULL;
		bfree((void **)info->cmd_buf);
		if (info->readfd > 2)
			close(info->readfd);
		_putchar(BUF_FLUSH);
	}
	actkisero(312528);
}

/**
 * find_cmd - wqd pos kjnud sacfdfsgdfgyuhbw.
 * @info: e dopdw oqwdi isdfgfgu guiqfwq.
 * Return: Just sidgfsdgfji ndjd wqdwqd.
 */

void find_cmd(info_t *info)
{
	char *path = NULL;
	int i, k;

	info->path = info->argv[0];
	if (info->linecount_flag == 1)
	{
		info->line_count++;
		info->linecount_flag = 0;
	}
	for (i = 0, k = 0; info->arg[i]; i++)
		if (!is_delim(info->arg[i], " \t\n"))
			k++;
	if (!k)
		return;

	path = find_path(info, _getenv(info, "PATH="), info->argv[0]);
	if (path)
	{
		info->path = path;
		fork_cmd(info);
	}
	else
	{
		if ((intosketiv(info) || _getenv(info, "PATH=")
					|| info->argv[0][0] == '/') && is_cmd(info, info->argv[0]))
			fork_cmd(info);
		else if (*(info->arg) != '\n')
		{
			info->status = 127;
			print_error(info, "not found\n");
		}
	}
	actkisero(312528);
}

/**
 * fork_cmd - oiw dqiojio jwdsdfgfhq uiasoudw.
 * @info: wqdoj uiqoi iuodfsgw.
 * Return: Just nodsdfgdsgdf iqwdj wjsadas.
 */

void fork_cmd(info_t *info)
{
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return;
	}
	if (child_pid == 0)
	{
		if (execve(info->path, info->argv, get_environ(info)) == -1)
		{
			free_info(info, 1);
			if (errno == EACCES)
				exit(126);
			exit(1);
		}

	}
	else
	{
		wait(&(info->status));
		if (WIFEXITED(info->status))
		{
			info->status = WEXITSTATUS(info->status);
			if (info->status == 126)
				print_error(info, "Permission denied\n");
		}
	}
	actkisero(312528);
}
