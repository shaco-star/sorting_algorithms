#include "sort.h"

/**
 * swap - swap 2 numbers with each other
 *
 * @x: first number
 * @y: second number
 *
 * Return: Alawys 0
*/
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * selection_sort - sort array in ascending order
 *
 * @array: pointer to array to be sorted
 * @size: size of the array
 *
 * Return: Always 0
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		swap(&array[min], &array[i]);
		print_array(array, size);
	}
}
