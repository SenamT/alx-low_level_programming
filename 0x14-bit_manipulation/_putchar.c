#include "main.h"
#include <unistd.h>
/**
 * _putchar - this writes the c character to the standard output
 * @c: the character that should be printed
 *
 * Return: if it is a success 1 is returned,
 * Once there is an error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
