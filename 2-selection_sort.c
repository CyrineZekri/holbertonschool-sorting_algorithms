#include "sort.h"
/**
 * swap- sorting  algorithm
 * @xp: The array to be sorted
 * @yp: Number of elements in @array
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
 * selection_sort - sorting algorithm
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;

		if (min_idx != i)
			swap(&array[min_idx], &array[i]);
		print_array(array, size);
	}
}
