#include "main.h"
#include <unistd.h>
/**
 * _puctar - writes the charcter c to stdout
 * @c: The character to print
 *
 * Return succcess 1
 * On error -1 is returned and errno is ser appropriately
 */
int _putchar(char c)
{
	return(write(1 &c,1));
}	
