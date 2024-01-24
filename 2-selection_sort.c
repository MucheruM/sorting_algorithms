#include <stdio.h>
#include "sort.h"

/**
 * swap_integers - A function that swaps two integers
 * @first: The first integer that undergoes swapping
 * @second: The second integer that undergoes swapping
 */
void swap_integers(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

/**
 * selection_sort - A function that sorts an array of ints in ascending order
 * @array: A pointer to the array of integers to sort
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	int *min_element;
	size_t outer, inner;

	if (array == NULL || size < 2)
		return;

	for (outer = 0; outer < size - 1; outer++)
	{
		min_element = array + outer;
		for (inner = outer + 1; inner < size; inner++)
		{
		/*Finding the index of the min element in the unsorted part*/
			if (array[inner] < *min_element)
				min_element = array + inner;
		}

		/*Swapping the found minimum element with the first element*/
		if ((array + outer) != min_element)
		{
			swap_integers(array + outer, min_element);
			print_array(array, size);
		}
	}
}
