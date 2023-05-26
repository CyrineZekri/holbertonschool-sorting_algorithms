#include "sort.h"
/**
 * selection_sort - sorting algorithm
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, min;
    int swap;
    for (i = 0; i < size - 1; i++)
    {
        min = array[0];
        for (j = i + 1; j < size - 1; j++)
        {
            if (array[i] < array[min])
            {
                min =
            }
        }
        if (min != i)
        {
            swap = array[i];
            array[i] = array[min];
            array[min] = swap;
            print_array(array, size);
        }
    }
}
