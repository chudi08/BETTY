#include "main.h"

/**
 * print-square - prints a square
 * Description: prints the size of a square
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{

				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
