#include "sort.h"
/**
 * selection_sort - the function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: The array to sort
 * @size: The size the of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, jMin;
	int temp;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		/* find the min element in the unsorted a[i .. aLength-1] */

		/* assume the min is the first element */
		jMin = i;
		/* test against elements after i to find the smallest */
		for (j = i + 1; j < size; j++)
		{
			/* if this element is less, then it is the new minimum */
			if (array[j] < array[jMin])
			{
				/* found new minimum; remember its index */
				jMin = j;
			}
		}

		if (jMin != i)
		{
			temp = array[i];
			array[i] = array[jMin];
			array[jMin] = temp;
			print_array(array, size);
		}
	}
}
