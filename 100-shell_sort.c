#include "sort.h"

/**
 * get_knuth_interval - Calculates the Knuth sequence interval for Shell sort.
 * @size: The size of the array.
 *
 * Return: The Knuth sequence interval.
 */
size_t get_knuth_interval(size_t size)
{
	size_t interval = 1;

	while (interval <= size)
	{
		interval = interval * 3 + 1;
	}

	return ((interval - 1) / 3);
}

/**
 * shell_sort - Sorts an array of integers using Shell
 * sort algorithm with Knuth sequence.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void shell_sort(int *array, size_t size)
{
	size_t interval;
	int temp;
       	size_t i, j;

	interval = get_knuth_interval(size);

	while (interval > 0)
	{
		for (i = interval; i < size; i++)
		{
		temp = array[i];
		j = i;

	while (j >= interval && array[j - interval] > temp)
	{
		array[j] = array[j - interval];
		j = j - interval;
	}
	array[j] = temp;
		}

		print_array(array, size);

		interval = (interval - 1) / 3;
	}
}
