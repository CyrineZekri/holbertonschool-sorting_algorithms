#include "sort.h"
/**
 * partition -takes last element as pivot, places
 *it at its correct position in sorted array
 * @array: array to be sorted
 * @start: Starting index
 * @end:index of the end
 * @size: array size
 * Return: int
 */
int partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end], i = start - 1, j = start, tmp = 0;

	while (j <= end - 1)
	{
		if (array[j] <= pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			if (i != j)
				print_array(array, size);
		}
		j++;
	}

	tmp = 0;
	i++;
	tmp = array[i];
	array[i] = array[end];
	array[end] = tmp;
	if (array[i] != array[end])
		print_array(array, size);

	return (i);
}
/**
 * quicksort - implements QuickSort
 * @array: array to be sorted
 * @start: Starting index
 * @end:   Ending index
 * @size:  size of the array
 */
void quicksort(int *array, int start, int end, size_t size)
{
	int i = 0;

	if (start < end)
	{
		i = partition(array, start, end, size);
		quicksort(array, start, i - 1, size);
		quicksort(array, i + 1, end, size);
	}
}
/**
 * quick_sort - entry point function
 * @array: array to be sorted
 * @size:  size of the array
 */
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}
