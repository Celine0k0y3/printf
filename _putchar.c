#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the cahr c to stdout
 * @c: variable for char to print
 *
 * Return: On Success 1
 * On error, -1 is returned, and errno is set approriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
