#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number which needs to be searched
 * @index: index of the bit you want to get,
 * starting from 0
 *
 * Return: value of the bit at the index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
