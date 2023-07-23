#include "sort.h"

/**
 * swap - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Return: None.
 */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order using the
 *                  Selection sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 *
 * Return: None.
 */
void selection_sort(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
	{
		size_t min_index = i;
		size_t j;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}

		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);

			print_array(array, size);
		}
	}
}

