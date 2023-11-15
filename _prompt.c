#include "shell.h"
/**
 * _prompt - prints the shell prompt
 */
void _prompt(void)
{
	char *current;

	current = NULL;
	current = getcwd(current, 1024);
	if (current == NULL)
	{
		perror("getcwd");
		free(current);
	}
	if (_strcmp(home_dir, current) != 0)
	{
		_putshell("myshell~$");
		fflush(stdout);
	}
	else
	{
		_putshell("myshell~$");
		fflush(stdout);
	}
	fflush(stdout);
}
