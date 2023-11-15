/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}


/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to be located
 *
 * Return: Pointer to c or null if character
 * not found
 *
 */


char *_strchr(const char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	if (*s == '\0' && c != '\0')
	{
		return (NULL);
	}
	else
	{
		return (s);
	}
}

/**
 * _puts - prints a string followed by new line
 *@str: the string to be printed
 * Return: voidf
 */
void _puts(const char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	putchar('\n');
}

