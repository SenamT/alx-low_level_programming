#include "main.h"

/**
 * flip_bits - number of bits you would need to flip,
 * to get from one number to another
 * @n: this will be the first digit
 * @m: this will be the second digit
 *
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
