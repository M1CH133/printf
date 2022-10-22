#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: Character to write to stdout
 * Return: 0 indicates success, -1 indicates failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
