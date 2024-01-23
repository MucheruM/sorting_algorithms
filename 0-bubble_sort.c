#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Sort an array of integers by bubbling larger int to the right.
 * @array: The array of integers to sort
 * @size: The size of the array of integers
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, check_swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		check_swap = 0; /*flag checking if swaps were made*/

		/* iterate the array comparing and swapping adjuscent elements*/
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/*Swapping elements happens*/
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				check_swap = 1; /*Set 1 to indicated the swap*/

				print_array(array, size); /*print after @ swap*/
			}
		}

		if (!check_swap) /* If no swaps occur terminate */
			break;
	}
}
