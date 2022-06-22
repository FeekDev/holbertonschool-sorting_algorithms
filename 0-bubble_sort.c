#include "sort.h"

/**
 * bubble_sort - the function
 *
 * @array: param with the array
 * @size: param with the size
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	/*steps to sort*/
	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
}
/**
 * swap - change th order
 *
 * @back: the index
 * @front: the index
 */
void swap(int *back, int *front)
{
	int temp = *back;

	*back = *front;
	*front = temp;
}
