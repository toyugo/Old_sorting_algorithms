#include "sort.h"

/**
 * swap_function - swap_function
 * @array: array
 * @index_a: index_a
 * @index_b: index_b
 * Return: Always 0
 */
void swap_function(int *array, int index_a, int index_b)
{
	int tmp;

	tmp = array[index_a];
	array[index_a] = array[index_b];
	array[index_b] = tmp;
}

/**
 * bubble_sort - bubble_sort
 * @array: array
 * @size:sixe
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;

	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - 1 - j; i++)
		{
			if (array[i + 1] < array[i])
			{
				swap_function(array, i, i + 1);
				print_array(array, size);
			}
		}
	}
}
