#include "search_algos.h"

/**
 * print_arr - helper func to print array everytime it's halved
 * @array: The array to print
 * @l: The left index of the original array
 * @r: The right index of the original array
 */
void print_arr(int *array, size_t l, size_t r)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - searches for midpoints
 * @array: The given array of integers
 * @size: The size of the array
 * @value: The value to search for
 * Return: The index at which the value is found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0;
	size_t l = 0;
	size_t r = size - 1;

	if (!array)
		return (-1);

	while (l <= r)
	{
		print_arr(array, l, r);
		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
