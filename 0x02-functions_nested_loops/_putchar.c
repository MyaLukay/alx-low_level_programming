#include "main.h"
#include <unistd.h>
/**
 * putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned and errno is set appropriately.
*/
int _putchar(char)
{
	return(write(1, &c, 1))
}