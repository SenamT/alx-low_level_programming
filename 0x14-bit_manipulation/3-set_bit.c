#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: this is the pointer for the number to be changed
 * @index: index of the bit you want to set, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
