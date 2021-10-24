#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t n, n2, iter;
	int temp;

	if (array == NULL)
		return;

	n = size;
	while (n > 0)
	{
		n2 = 0;
		for (iter = 0; iter < n - 1; iter++)
		{
			if (array[iter] > array[iter + 1])
			{
				temp = array[iter];
				array[iter] = array[iter + 1];
				array[iter + 1] = temp;
				n2 = iter + 1;
				print_array(array, size);
			}
		}
		n = n2;
	}
}
